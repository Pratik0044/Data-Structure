//Try to make two stack on 1 array;

#include<iostream>
using namespace std;

class Stack{
    public: 
        int *arr;
        int top1;
        int top2;
        int size;
    Stack(int size){
        this->size=size; 
        arr=new int[size];
        
        top1=-1;
        top2=size;
    }

    void push1(int data){
        if(top2-top1==1) {
            cout<<"Stack overflow: \n";
        }
        else{
            top1++;
            arr[top1]=data;
        }
    }
    void pop1(){
        if(top1==-1)
            cout<<"Stack Underflow: \n";
        else{
            top1--;
        }
        
    }
    void push2(int data){
        if(top2-top1==1) {
            cout<<"Stack overflow: \n";
        }
        else{
            top2--;
            arr[top2]=data;
        }
    }
    void pop2(){
        if(top2>=size)
            cout<<"Stack undereflow: \n";
        else{
            top2++;
        }
    }
    void print(){
        cout<<endl;
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push2(500);
    s.push2(400);
    s.push2(300);
    s.push2(200);
    s.push2(100);
    
    s.print();
    
    

return 0;
}