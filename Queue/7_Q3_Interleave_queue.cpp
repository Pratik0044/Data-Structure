/*
Question:- Interleave first and second half of queue?
Answer:- 1. Take first half of queue into a new queue
         2. Push and pop alternate eelement in queue.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void interleaveQueue(queue<int> &q){
    int n=q.size();
    int k=n/2;
    int count=0;
    queue<int> q2;
    if(q.empty())
        return;

    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k)
            break;
    }

    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);

    }
    if(n&1){
        int last = q.front();
        q.pop();

        q.push(last);
    }
    


}


int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    interleaveQueue(q);

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}