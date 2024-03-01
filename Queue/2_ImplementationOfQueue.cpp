#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data){
        if(rear==size){
            cout<<"Q is Full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"Q is Empty"<<endl;
        }
        else{
            cout<<"Poped Element is: "<<arr[front]<<endl;
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }

        }
    }

    int getFront(){
        if(front==rear){
            cout<<"Q is Empty"<<endl;
            return -1;
        }
        else{
            cout<<"Front element is: "<<arr[front]<<endl;
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear)
            return true;
        else    
            false;
    }

    int getSize(){

    }

    // int getSize(){
    //     return rear-front;
    // }

};
int main(){
    Queue q(10);
    q.push(5);
    q.push(50);
    q.push(500);
    q.push(5000);
    q.push(50000);
    q.push(500000);
    q.push(5000000);

    // cout<<"Size of Queue is: "<<q.getSize()<<endl;
    return 0;
}