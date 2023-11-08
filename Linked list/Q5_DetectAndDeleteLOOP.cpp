#include<iostream>
#include"LinkedList.h"

int main(){
    Node* head=new Node(50);
    Node* tail=head;
    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);
    insertAtTail(head,tail,90);
    insertAtTail(head,tail,100);

    print(head);
    cout<<endl;

    
}