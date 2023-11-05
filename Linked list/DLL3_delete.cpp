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
    ~node(){
        cout<<"\nNode with value: "<<this->data<<" DELETED"<<endl;
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
void deletenode(node* &head,node* &tail,int pos){
    if(head==NULL){
        cout<<"\nLinked List is Empty;";
        return;
    }
    
    if(head->next==NULL){
        node* temp=head;
        head=NULL;
        temp=NULL;
        delete temp;
        return;
    }
    if(pos==1){
        node* temp=head;
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
        return ;
    }
    int len=findlength(head);
    if(pos>len){
        cout<<"\nPlease enter a valid POSITION.";
        return;
    }
    if(pos==len){
        node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
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
        back->next=current->next;
        current->next->prev=back;
        current->next=NULL;
        current->prev=NULL;
        delete current;
        return;
       
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
    insertAtHead(head,tail,100);
    insertAtTail(head,tail,500);
    insertAtPosition(head,tail,6,515);
 
    print(head);
    int pos=6;
    deletenode(head,tail,pos);
    cout<<"Printing linked list after deleting "<<pos<<"POSITION node:";
    print(head);
}