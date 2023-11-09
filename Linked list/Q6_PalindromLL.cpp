
#include<iostream>
#include"LinkedList.h"
using namespace std;
Node* findmiddle(Node* head){
    Node* slow=head;
   
    Node* fast=head;
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
Node* Reverse(Node* &head){
    if(head==NULL){
        cout<<"\nCan't revese the half of the LL \n";
        return head;
    }
    
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;

    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    return prev;
}

bool chekPalindrom(Node* &head){
    if(head==NULL){
        cout<<"LL is empty: "<<endl;
        return true; 
    }
    if(head->next==NULL){
        return true;
    }
    if(head->next->next==NULL){
        if (head->data!=head->next->data)
        {
            return false;
        }
        return true;
        
    }
    Node* middle=findmiddle(head);
    Node* headofreverLL=Reverse(middle->next);
    middle->next=headofreverLL;
    Node* temp1=head;
    Node* temp2=headofreverLL;
    
    while (temp2!=NULL  )
    {
        if(temp1->data!=temp2->data){
           return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
    }
    return true;
    
}
int main(){
    Node* head=new Node(10);
    Node* tail=head;
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,10);

    print(head);

    cout<<endl<<"Middle Node is: "<<findmiddle(head)->data<<endl;
    print(head);
    bool ispalindrom=chekPalindrom(head);
    cout<<endl;
    print(head);
    if(ispalindrom==1){
        cout<<"\nYes, LL is Palindrom."<<endl;
    }
    else{
        cout<<"\nNO, LL is not a Palindrom"<<endl;
    }
}