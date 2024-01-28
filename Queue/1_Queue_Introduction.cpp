/* DATA STRUCTURE WHICH USE (FIFO) FASHION. 
IT CONTAIN (REAR) AND (FRONT).
ADDITION PERFORM ON REAR AND DELETION PERFORM ON FRONT
====================================================
IT USED IT (SLIDING WINDOWS),(TRAIVARSALS),(GRAPHS)
-------------++++++++++++++++++++++++------------------*/

#include<iostream>
#include<queue>//STL of queue

using namespace std;

int main(){
    //creation
    queue<int> q;
    //insertion
    q.push(600);
    q.push(700);
    q.push(800);
    q.push(900);
    q.push(1000);

    //size of queue
    cout<<"Size of queue is: "<<q.size()<<endl;
    //deletion
    q.pop();

    cout<<"Size of queue is: "<<q.size()<<endl;
    // empty cheking
    if(q.empty()){
        cout<<"Queue is empty: "<<endl;
    }
    else{
        cout<<"Queue is not empty: "<<endl;
    }
    // front element

    cout<<"Front element of queue : "<<q.front()<<endl;
}

