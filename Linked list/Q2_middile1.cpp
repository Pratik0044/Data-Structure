//find meddle of the LL by using simple method

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    // node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        // this->prev=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
        // this->prev=NULL;
    }
};
void print(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int findlength(node* head){
    node* temp=head;
    int len=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
    
}
node* findmiddle(node* &head,int len){
    node* temp=head;
    int i=1;
    if(len%2){
       len=(len)/2+1;
    }
    else{
        len=len/2;
    }
    while (i<len)
    {
        temp=temp->next;
        i++;
    }
    return temp;
    
}


int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* five=new node(50);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;

    print(head);
    int len=findlength(head);
    cout<<"\nMiddle element of the list is : "<<findmiddle(head,len)->data<<endl;

}