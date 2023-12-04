//Program to reverse the stack using recursion: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertBottom(stack<int> &s,int &data){
    
    if(s.size()==0){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    InsertBottom(s,data);
    s.push(temp);
}

void ReverseStack(stack<int> &s){
    //Base Case
    if(s.empty()){
        return;
    }
    
    int target=s.top();
    s.pop();
    //Recursive Case
    ReverseStack(s);
    
    InsertBottom(s,target);
}

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
 
    ReverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}