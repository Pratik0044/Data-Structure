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

void deleteNode(int pos,Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"Linked List is empty:\n";
        return;
    }
    // for first node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    // for last node
    int len=FindLength(head);
    if(len==pos){
        int i= 1;
        Node* prev=head;
        while (i<pos-1)
        {
            prev=prev->next;
            i++;
        }

        prev->next=NULL;
        Node*temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    // for middel node
    else{
        Node* prev=head;
        int i=1;
        while (i<pos-1)
        {
            prev=prev->next;
            i++;
        }
        Node* temp=prev->next;
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
}


int main(){
    
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head,tail,100);
    insertAtHead(head,tail,200);
    insertAtHead(head,tail,300);
    insertAtHead(head,tail,400);
    insertAtHead(head,tail,500);
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    // insertAtTail(head,tail,30);
    // insertAtTail(head,tail,40);
    // insertAtTail(head,tail,50);
    // insertAtPosition(0,head,tail,5000);

    cout<<"\nPrinting the data of the Linked list: \n";
    print(head);
    cout<<"\n";
    // insertAtPosition(11,head,tail,2121212);
    // cout<<"\nPrinting the data after the data insert at the end: "<<endl;
    deleteNode(1,head,tail);
    cout<<"\nPrinting the data of the Linked list: \n";
    print(head);
    cout<<"\n";

    // deleteNode(6,head,tail);
    // cout<<"\nPrinting the data of the Linked list: \n";
    // print(head);
    // cout<<"\n";

    deleteNode(3,head,tail);
    cout<<"\nPrinting the data of the Linked list: \n";
    print(head);
    cout<<"\n";
}