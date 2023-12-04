// To insert element at the bottom of stack
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
int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
      while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    int data=1000;
    InsertBottom(s,data);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

return 0;
}