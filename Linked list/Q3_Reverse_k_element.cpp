//Reverse k elements of LL from start

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next= NULL;
    }
};
int FindLength(Node* &head){
    Node* temp=head;
    int cnt=0;
    while (temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
    
}

void print(Node* &head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
}
void insertAtPosition(int pos,Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    if(pos==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=FindLength(head);
    if(pos>=len){
        insertAtTail(head,tail,data);
        return;
    }
    
    int i=1;
    Node* prev=head;
    while (i<pos)
    {
        prev=prev->next;
        i++;
    }
    Node* current=prev->next;

    Node* newnode=new Node(data);
    newnode->next=current;
    prev->next=newnode;
}
Node* reverseKelement(Node* &head,int k){
    if(head==NULL){
        cout<<"Linked List is empty: \n";
        return head;
    }
    int len =FindLength(head);
    if(len<k){
       
        return head;
    }

    Node* back=NULL;
    Node* current=head;
    Node* forward=head->next;
    int count=0;

    while (count<k)
    {
        forward=current->next;
        current->next=back;
        back=current;
        current=forward;
        count++;
    }
    
    if(forward!=NULL){

        head->next=reverseKelement(forward,k);
    }
    return back;

}

int main(){
    
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,300);
    insertAtHead(head,tail,400);
    insertAtHead(head,tail,500);
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);

    cout<<"Printing the data of the Linked list: \n";
    print(head);
    cout<<endl;
    head=reverseKelement(head,6);
    cout<<"Priting the List after reverse: " <<endl;
    print(head);
   
   

}