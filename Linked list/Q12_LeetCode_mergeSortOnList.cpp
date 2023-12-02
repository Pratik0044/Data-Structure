// IN this file i am implement merge sort on LINKED LIST to sort the list like array


#include"LinkedList.h"
#include<iostream>
using namespace std;
Node* merge(Node* headA,Node *headB){
    Node* merge=new Node(-1);
    Node* tmerge=merge;
    Node* a=headA;
    Node* b=headB;

    if(a==NULL) return b;
    if(b==NULL) return a;

    while (a && b)
    {
        if(a->data <= b->data){
            insertAtTail(merge,tmerge,a->data);
            a=a->next;
        }
        else{
            insertAtTail(merge,tmerge,b->data);
            b=b->next;
        }

    }
    while (a)
    {
        insertAtTail(merge,tmerge,a->data);
        a=a->next;
        
    }
    while (b)
    {
        insertAtTail(merge,tmerge,b->data);
        b=b->next;
    }
    return merge->next;
  
}
Node* findmid(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
}

Node* mergesort(Node* head){
    if(head==NULL || head->next==NULL)
        return head;
    // break kar rahe hai list ko two part me
    Node* mid=findmid(head);
    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;
    // sor karana hai recursivly

    left=mergesort(left);
    right=mergesort(right);

    //ab done linked list ko merge karan hai 

    Node* mergedLL=merge(left,right);
}

int main(){
    Node* head=new Node(10);
    Node* tail=head;

    insertAtTail(head,tail,2);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,8);
    insertAtTail(head,tail,0);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);

    print(head);

    head=mergesort(head);
    cout<<"\nLL after sort: "<<endl;
    print(head);
}