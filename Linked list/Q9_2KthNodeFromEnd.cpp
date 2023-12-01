//Find Kth node from end without recusion


#include<iostream>
#include"LinkedList.h"
using namespace std;

int getnode(Node* &head,int position){
    if(head==NULL){
        cout<<"LL is empty: "<<endl;
        return -1;
    }
    int len=FindLength(head);
    int pos=len-position;
    Node* temp=head;
    while (pos)
    {
        temp=temp->next;
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

  
}