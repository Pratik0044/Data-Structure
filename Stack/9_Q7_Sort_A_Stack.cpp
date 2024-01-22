// Sort a Stack using recursion: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertSort(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    if(s.top()>=data){ 
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertSort(s,data);
    s.push(temp);

}
void sortStack(stack<int> &s){
    //Base case
    if(s.empty()){
        return;
    }
    int topelement=s.top();
    s.pop();
    sortStack(s);
    insertSort(s,topelement);
}

int main(){

    stack<int> s;

    s.push(2);
    s.push(9);
    s.push(6);
    s.push(3);
    s.push(2);
    s.push(8);
    s.push(5);

    sortStack(s);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

return 0;
}