//This is the solution of GFG Fllaten Question

/* Node structure  used in the program*/
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};


/*  Function which returns the  root of 
    the flattened linked list. */
Node* merge(Node* a, Node* b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node* ans=NULL;
    if(a->data < b->data){
        ans=a;
        ans->bottom=merge(a->bottom,b);
    } 
    else{
        ans=b;
        b->bottom=merge(a,b->bottom);
    }
    return ans;
}

Node *flatten(Node *root)
{
   // Your code here
   if(!root) return NULL;
   Node* mergedLL=merge(root,flatten(root->next));
   return mergedLL;
}
int main(){
    
}