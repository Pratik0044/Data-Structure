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
Node* Reverse(Node* &prev,Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* forward=curr->next;
    curr->next=prev;

    return Reverse(curr,forward);
    
}

Node* reversebyloop(Node* head){
    Node* prev=NULL;
    Node* curr=head;

    while (curr!=NULL)
    {
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main(){
    
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,100);
    insertAtHead(head,tail,200);
    insertAtHead(head,tail,500);
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtPosition(0,head,tail,5000);

    cout<<"Printing the data of the Linked list: \n";
    print(head);
    cout<<endl;
    Node* prev=NULL;
    Node* curr=head;
    head=Reverse(prev,curr);
    print(head);
    cout<<endl;

    //Reverse usign loop

    head=reversebyloop(head);
    print(head);


    


}