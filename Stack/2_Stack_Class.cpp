#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class stack{
    public: 
        int *arr;
        int top;
        int size;
    stack(int size){
        arr= new int[size];
        this->size=size;
        top=-1;
    }
    //Function
    void push(int data){
        if(size-top>1)
            cout<<"Stack Overflow\n";
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop(){
        if(top==-1)
            cout<<"Stack Underflow\n";
        else
            top--;
        
    }
    void top(){
        if(top==-1)
            cout<<"Stack is Empty: \n";
        
        else
            cout<<arr[top];
        
    }
    void size(){
        if(top==-1)
            cout<<"0";
        else
            cout<<"top";
    }
    void empty(){
        if(top==-1)
            cout<<"Stack is already empty: \n";
        else
            top=-1;
        
    }

};


int main(){

    

return 0;
}