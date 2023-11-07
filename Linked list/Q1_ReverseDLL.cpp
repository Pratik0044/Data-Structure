#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
node* Reverse(node* back,node* current){
    if(current==NULL){
        return back;
    }
    node* forward=current->next;
    current->next=back;
    current->prev=forward;
    
    return Reverse(current,forward);
    
}

int main(){
    
    node* first=new node(20);
    node* second=new node(30);
    node* third=new node(40);
    node* fourth=new node(50);
    node* five=new node(60);
    

    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->next=five;
    fourth->prev=third;
    five->next=NULL;
    five->prev=fourth;

    print(first);
    
    node* back=NULL;
    node* current=first;

    first=Reverse(back,current);
    cout<<"\nAfter reverse the LIST is : "<<endl;
    print(first);

}