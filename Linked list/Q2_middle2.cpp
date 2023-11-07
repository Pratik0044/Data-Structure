#include<iostream>
using namespace std;

class node{
    public:
    int data;
    // node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        // this->prev=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
        // this->prev=NULL;
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
node* findmiddle(node* head){
    node* slow=head;
    node* fast=head;
    if(head==NULL){
        cout<<"Linked list is empty: ";
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    while (slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
         }
    }
    return slow;
}


int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    head->next=second;
    second->next=third;
    third->next=fourth;


    print(head);
 
    cout<<"\nThe Middle element is : ";
    cout<<findmiddle(head)->data<<endl;

    print(head);
}