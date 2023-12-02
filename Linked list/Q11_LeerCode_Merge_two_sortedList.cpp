//Merge to sorted list: 

#include"LinkedList.h"
#include<iostream>
using namespace std;

Node* mergefun(Node* headA,Node *headB){
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

int main(){
    Node* headA=new Node(1);
    Node* tailA=headA;
    Node* headB=new Node(2);
    Node* tailB=headB;

    insertAtTail(headA,tailA,3);
    insertAtTail(headA,tailA,5);

    insertAtTail(headB,tailB,4);
    insertAtTail(headB,tailB,5);

    cout<<"\nFirst Linked List is: ";
    print(headA);
    cout<<"\nSecond Linked List is: ";
    print(headB);
    cout<<endl;
    Node* ans=mergefun(headA,headB);
    print(ans);


}