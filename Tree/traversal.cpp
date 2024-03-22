/*Their are total two TRAVERSAL TECHNIQUEUS
1. BFS (Breadht first search)
2. DFS (Depth first search)

DFS have also three type:- 1. Inorder Traversal 2. Pre-Order Traversal 3. Post-order Traversal

*/

#include<iostream>
using namespace std;

class Node
{

public:
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void preorder(Node* root);
void postorder(Node* root);
void inorder(Node* root);



int main(){
    Node * root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->right=new Node(5);
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    
}

// Pre-order Traversal

void preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//Post-order Traversal

void postorder(Node* root){
    if(root==NULL)
        return;
    
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

// In-order Traversal

void inorder(Node* root){
    if(root==NULL)
        return;
    
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
    