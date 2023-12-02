/*Given the heads of two singly linked-lists headA and headB,
return the node at which the two lists intersect.
If the two linked lists have no intersection at all, return null.*/

#include"LinkedList.h"
#include<iostream>
using namespace std;

Node* intersectionElement(Node* headA, Node* headB){
    Node* a=headA;
    Node* b=headB;

    while (a->next && b->next)
    {
        if(a->data=b->data  )
            return a;

        a=a->next;
        b=b->next;
    }
    if(a->next && b->next && a!=b) return NULL;
    if(a->next==0){
        int blen=0;
        while (b->next)
        {
            blen++;
            b=b->next;
        }
        while (blen--)
        {
            headB=headB->next;
        }
        
    }
    else
    {
        int alen=0;
        while (a->next)
        {
            alen++;
            a=a->next;
        }
        while (alen--)
        {
            headA=headA->next;
        }
        
    }
    while (headA != headB)
    {
        headA=headA->next;
        headB=headB->next;
    }
    return headA;
  
}
int  main(){
    Node* headA=new Node(1);
    Node* tailA=headA;
    Node* headB=new Node(10);
    Node* tailB=headB;

    insertAtTail(headA,tailA,2);
    insertAtTail(headA,tailA,3);
    insertAtTail(headA,tailA,4);
    insertAtTail(headA,tailA,5);
    insertAtTail(headA,tailA,6);
    insertAtTail(headA,tailA,7);
    insertAtTail(headA,tailA,8);

    insertAtTail(headB,tailB,10);
    insertAtTail(headB,tailB,20);
    insertAtTail(headB,tailB,3);
    
    int len=3;
    Node* temp=headA;
    while (len)
    {
        temp=temp->next;
        len--;
    }
    tailB->next=temp;
    tailB=tailA;

    print(headA);

    cout<<endl;

    print(headB);
    
    Node* ans=intersectionElement(headA,headB);
    cout<<endl<<ans->data<<endl;

}