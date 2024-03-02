/* Queue ko reverse karane ke 2 simple tarika hai..
1. Stack ka use karake 
2. Recursion ka use karake
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversRecusion(queue<int> &q){
    //base case
    if(q.empty())
        return;

    //recursive case
    int data=q.front();
    q.pop();
    reversRecusion(q);
    q.push(data);

}

void reversStack(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
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

    reversStack(q);
    reversRecusion(q);
    
    while (!q.empty())
    {
        cout<<" "<<q.front()<<" "<<endl;
        q.pop();
    }

    
}
