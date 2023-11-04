#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next= NULL;
    }
};

void print(Node* &head){
    Node* temp=head;

    while (head!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    
    
    Node* first= new Node(100);
    Node* second= new Node(200);
    Node* third= new Node(300);
    Node* fourth= new Node(400);
    Node* five= new Node(500);

    
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;

    cout<<"Printing the data of the Linked list: \n";
    print(first);


}