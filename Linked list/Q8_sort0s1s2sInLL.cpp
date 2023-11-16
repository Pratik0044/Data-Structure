// Sort the Linked List of o's 1's and 2's
//By replacing the data of the Linked List 
 

#include"LinkedList.h"
#include<iostream>
using namespace std;

void sortZeroOneTwo(Node* &head){
    int zero=0;
    int one=0;
    int two=0;
   
    if(head==NULL){
        cout<<"\n Linked List is empty: "<<endl;
        return;
    }

    int len=FindLength(head);
    Node* temp=head;
    
   while(temp!=NULL)
    {
        
        if(temp->data==0){
            zero++;
            temp=temp->next;
           
        }
        else if (temp->data==1)
        {
            one++;
            temp=temp->next;
        }
        else if(temp->data==2){
            two++;
            temp=temp->next;
        }
       
    }
   
    cout<<zero<<" "<<one<<" "<<two<<" "<<endl;
    temp=head;
    
    while (zero--)
    {
        temp->data=0;
        temp=temp->next;
    }
     while (one--)
    {
        temp->data=1;
        temp=temp->next;
    }
     while (two--)
    {
        temp->data=2;
        temp=temp->next;
    }
    
    
}
int main(){
    Node* head=new Node(0);
    Node* tail=new Node;
    Node* _2=new Node(2);
    Node* _3=new Node(0);
    Node* _4=new Node(0);
    Node* _5=new Node(1);
    Node* _6=new Node(2);
    Node* _7=new Node(0);
    Node* _8=new Node(2);
    Node* _9=new Node(2);
    Node* _10=new Node(1);
    head->next=_2;
    _2->next=_3;
    _3->next=_4;
    _4->next=_5;
    _5->next=_6;
    _6->next=_7;
    _7->next=_8;
    _8->next=_9;
    _9->next=_10;
    _10->next=tail;
    cout<<"Linked list is : "<<endl;
    print(head);
    cout<<"\nLenth of LL is : "<<FindLength(head)<<endl;
    sortZeroOneTwo(head);
    cout<<"\nAfter sort LL is : "<<endl;
    print(head);

}