
// Sort the Linked List of o's 1's and 2's
//Without replacing the data of the Linked List 
#include<iostream>
#include"LinkedList.h"
Node* SortWithoutRpalacing(Node* &head){
    Node* zero=new Node(-1);
    Node* tail0=zero;
    Node* one=new Node(-1);
    Node* tail1=one;
    Node* two=new Node(-1);
    Node* tail2=two;

    Node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==0)
        {
            Node* local=temp;
            temp=temp->next;
            local->next=NULL;

            tail0->next=local;
            tail0=local;
            delete local;
        }
        else if(temp->data==1){
            Node* local=temp;
            temp=temp->next;
            local->next=NULL;
            
            tail1->next=local;
            tail1=local;
            delete local;
        }
        else if(temp->data==2){
            Node* local=temp;
            temp=temp->next;
            local->next=NULL;
            
            tail2->next=local;
            tail2=local;
            delete local;
        }

    }
    temp=one;
    one=one->next;
    temp->next=NULL;
    delete temp;

    temp=two;
    two =two->next;
    temp->next=NULL;
    delete temp;

    if(one!=NULL){
        tail0->next=one;
        if (two!=NULL)
        {
            tail1->next=two;
        }
        
    }
    else{
        if (two!=NULL)
        {
            tail0=two;
        }

        
    }

    temp=zero;
    zero=zero->next;
    delete temp;

    return zero;
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

    print(head);
    cout<<endl;
    head=SortWithoutRpalacing(head);
    print(head);


}