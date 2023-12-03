#include"LinkedList.h"
#include<iostream>
using namespace std;


bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"Linked List is empty: ";
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while ( fast!=NULL)
    {
        fast=fast->next;
        if (fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
            return true;
        
    }
    return false;
    
}