#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public: 
        int *arr;
        int top;
        int size;
    Stack(int size){
        arr= new int[size];
        this->size=size;
        top=-1;
    }
    //Function
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
            
        else
            cout<<"Stack Overflow\n";
    }
    void pop(){
        if(top==-1)
            cout<<"Stack Underflow\n";
        else
            top--;
        
    }
    int gettop(){
        if(top==-1){
            cout<<"Stack is Empty: \n";
        }
        else
            return arr[top];
        
    }
    int getsize(){
        if(top==-1)
            return 0;
        else
            return top;
    }
    bool isempty(){
        if(top==-1)
            return true; 
        else
            return false;
        
    }

};


int main(){

    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    s.push(60);
    cout<<"\nEmpty test: "<<s.isempty()<<endl;
    while (!s.isempty()){
        cout<<s.gettop()<<" ";
        s.pop();
    }
    cout<<"\nEmpty test: "<<s.isempty()<<endl;
    cout<<"\nSize of stack: "<<s.getsize();
    
    
    
return 0;
}