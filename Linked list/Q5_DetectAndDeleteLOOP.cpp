#include<iostream>
#include"LinkedList.h"
bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"Linked List is empty: ";
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while ( fast!=NULL)
    {
        fast=fast->next;
        if (fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
            return true;
        
    }
    return false;
    
}
Node* startinPointLoop(Node* head){
    if(head==NULL){
        cout<<"Linked List is empty: ";
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }

    }
    while (slow!=fast)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
 
}

void deleteLoop(Node* head){

    if(head==NULL){
        cout<<"Linked List is empty: ";
        return ;
    }
    Node* slow=head;
    Node* fast=head;

    while (fast!=NULL)
    {   
        fast=fast->next;
        
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }

    }
    Node* back=fast;
    while (slow!=fast)
    {
        back=fast;
        fast=fast->next;
        slow=slow->next;
    }
    back->next=NULL;
    return ;
}

int main(){
    Node* head=new Node(10);
    Node* _2=new Node(20);
    Node* _3=new Node(30);
    Node* _4=new Node(40);
    Node* _5=new Node(50);
    Node* _6=new Node(60);
    Node* _7=new Node(70);
    Node* _8=new Node(80);
    Node* _9=new Node(90);
    Node* _10=new Node(100);
    head->next=_2;
    _2->next=_3;
    _3->next=_4;
    _4->next=_5;
    _5->next=_6;
    _6->next=_7;
    _7->next=_8;
    _8->next=_9;
    _9->next=_10;
    _10->next=_6;

    cout<<endl<<"Loop is present or not : ";
    cout<<checkForLoop(head)<<endl;
    if(checkForLoop(head)){
        cout<<"Starting Node of LL: "<<startinPointLoop(head)->data<<endl;
    }
    deleteLoop(head);
    cout<<"After apply the Deleteloop() function"<<endl;
    cout<<"Loop is present or not : ";
    cout<<checkForLoop(head)<<endl;    
    print(head);


}