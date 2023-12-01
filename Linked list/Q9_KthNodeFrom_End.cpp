//Find the Kth node from end using recursion

#include<iostream>
#include"LinkedList.h"
using namespace std;

void function(Node* head,int &position,int &ans){
    if(head==NULL)
        return;
    function(head->next,position,ans );
    if(position==0){
        ans=head->data;
    }
    position--;

}
int getnode(Node* head,int position){
    int ans=-1;
    function(head,position,ans);
    return ans;
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
    cout<<"\nNode from end: "<<  getnode(head,0);
  
}