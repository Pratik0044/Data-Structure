// This is a types of queue which is known as CIRCULAR QUEUE

#include<iostream>
using namespace std;

class CQueue{
    public:
        int rear;
        int front;
        int size;
        int *arr;
    CQueue(int size){
        rear=-1;
        front=-1;
        this->size=size;
        arr=new int[size];
        
    }
    void push(int data){

        // Queue full to nahi hai
        if((front==0 && rear==size-1) || (rear==front-1)){
            cout<<"Queue is Full:"<<endl ;
        }

        //Single element ke liye -------> first Element 
        else if(front == -1){
            front = rear = 0;
            arr[rear]=data;
            cout<<"successfully Pushed element : "<<data<<endl;
        }

        //Circular nature
        else if(rear==size-1 && front != 0){
            rear=0;
            arr[rear]= data;
             cout<<"successfully Pushed element : "<<data<<endl;
        }
       

        // Normal Flow
        else{
            rear++;
            arr[rear]=data;
             cout<<"successfully Pushed element : "<<data<<endl;
        }

        

    }

    void pop(){
        int data=arr[front];
        // Khali to nahi hai n 
        if(front==-1){
            cout<<"Queue is Empty can't POP: "<<endl;
        }

        // Single Element
        
        else if(front== rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
            cout<<"successfully POP element : "<<data<<endl;
        }

        //Circular nature
        
        else if(front==size-1){
            arr[front]=-1;
            front = 0;
            cout<<"successfully POP element : "<<data<<endl;
        }
        
        // Simple case
        else{
            arr[front]=-1;
            front++;
            cout<<"successfully POP element : "<<data<<endl; 
        }
    }

    void Getfront(){
        if(front==-1){
            cout<<"Queue is Empty : "<<endl;
        }
        else{
        cout<<"Element at front : "<<arr[front]<<endl;
        }
    }

};

int main(){
    CQueue q(10);
    q.push(1000);
    q.pop();
    q.Getfront();
    
}