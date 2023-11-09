//If Linked List is in Accending or Deccending form;

#include<iostream>
#include"LinkedList.h"
void deleterepeatedNode(Node* head){
    if(head==NULL){
        cout<<"\nLL is empty:";
        return;
    }
    if(head->next==NULL){
        cout<<"\nOnly single node in LL: ";
        return; 
    }
    Node* curr=head;
    while (curr!=NULL)
    {
        if((curr->next!=NULL) && (curr->data==curr->next->data)){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
    
}
int main(){
    Node* head=new Node(10);
    Node* tail=head;
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,10);
    cout<<"\nLL is: "<<endl;
    print(head);
    cout<<"\nLL after Delete Duplicate node : "<<endl;
    deleterepeatedNode(head);
    print(head);
}