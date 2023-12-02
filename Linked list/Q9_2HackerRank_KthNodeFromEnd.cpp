//Find Kth node from end without recusion


#include<iostream>
#include"LinkedList.h"
using namespace std;

int getnode(Node* &head,int position){

    int len=FindLength(head);
    int pos=(len-position);
    Node* temp=head;
    while (pos-1)
    {
        temp=temp->next;
        pos--;
    }
    return temp->data;
    
    
}
int main(){
    Node* head=new Node(50);
    Node* tail=head;
    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);
    insertAtTail(head,tail,90);
    insertAtTail(head,tail,100);
    insertAtTail(head,tail,110);

    print(head);
    int pos;
    cout<<"\nEnter the position from end: ";
    cin>>pos;
    cout<<pos<<" Element from end: ";
    cout<<getnode(head,pos);

  
}