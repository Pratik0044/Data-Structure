// Find middle element of Stack using recursion: 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findmid(stack<int> &s , int &n){
    if(n==0) {
        cout<<"There is no element in Stack: ";
        return;
    }
    if(s.size()==n/2+1){
        cout<<"Middle element is: "<<s.top();
        return;
    }
    
    int temp=s.top();
    s.pop();

    findmid(s,n);
    s.push(temp);

}

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    st.push(120);
    int n=st.size();
    findmid(st,n);

return 0;
}