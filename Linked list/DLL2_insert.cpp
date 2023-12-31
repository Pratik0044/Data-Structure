#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int findlength(node* head){
    node* temp=head;
    int len=0;
    while (temp!=NULL)
    {   
        temp=temp->next;
        len++;
    }
    return len;

}
void insertAtHead(node* &head,node* &tail,int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    node* newnode=new node(data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    
}
void insertAtTail(node* &head,node* &tail,int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    node* newnode=new node(data);
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void insertAtPosition(node* &head,node* &tail,int pos,int data){
    
    if(head==NULL || pos==1 ){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findlength(head);
    if(pos>len){
        insertAtTail(head,tail,data);
        return;
    }
    else{
        int i=1;
        node* back=head;
        while (i<pos-1)
        {
            back=back->next;
            i++;  
        }
        node* current=back->next;
        node* newnode=new node(data);
        newnode->next=current;
        newnode->prev=back;
        current->prev=newnode;
        back->next=newnode;
        
        
    }
    
}

int main(){
    node* first=new node(20);
    node* second=new node(30);
    node* third=new node(40);

    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    node* head=first;
    node* tail=third;
    cout<<"Print the original Linked list : \n";
    print(head);
    cout<<endl;
    insertAtHead(head,tail,100);
    cout<<"\nPrinting the Doubly linked list after inserting the data at the HEAD:"<<endl;
    print(head);

    insertAtTail(head,tail,500);
    cout<<"\nPrinting linked list after inserting the data at the TAIL"<<endl;
    print(head);
    insertAtPosition(head,tail,6,515);
    cout<<"\nPrinting  linked list after inserting the data at the POSITION"<<endl;
    print(head);
    
}