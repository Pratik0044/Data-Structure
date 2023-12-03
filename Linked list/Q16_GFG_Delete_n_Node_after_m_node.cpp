// This is the question of GFG "Delete n node after m node: "
//  https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1

/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
*/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        if(head==NULL) return ;
        Node* it=head;
        for(int i=0;i<M-1;i++){
            if(it==NULL) return ;
            
            it=it->next;
            
        }
        
        if(!it) return;
        
        Node* mthnode=it;
        it=mthnode->next;
        for(int i=0;i<N;i++){
            if(!it) break;
            
            Node* temp=it->next;
            delete it;
            it=temp;
        }
        mthnode->next=it;
        
        linkdelete(it,M,N);
        

    }
};
