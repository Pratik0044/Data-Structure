// Remove Redundent brackets
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<char> st;
    int n;
    cout<<"\nEnter the size of expression: ";
    cin>>n;
    char ch;
    bool status=false;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='('|| ch=='{' || ch=='['){
            st.push(ch);
        }
        if(ch=='+' || ch=='-'||ch=='*'||ch=='/'|| ch=='='){
            st.push(ch);
        }
        else{
            if(ch==')' || ch==')'||ch==']'|| ch=='}' ){
                if(ch==st.top()){
                    status=true;
                }
                
            }
        }
    }

return 0;
}