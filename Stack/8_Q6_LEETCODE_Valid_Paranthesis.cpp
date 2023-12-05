// Valid Paranthesis:  
// It is LeetCode's problem;
// https://leetcode.com/problems/valid-parentheses/description/
#include<stack>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<char> s;
    int n;
    cout<<"\nEnter the number of opening and closing parantheses:  ";
    cin>>n;
    cout<<"\nEnter the brackets: ";
    char ch;
    for (int  i = 0; i < n; i++)
    {
        cin>>ch;
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                
                char topch=s.top();
                if(ch==')' && topch=='('){
                    s.pop();
                }
                else if(ch=='}' && topch=='{'){
                    s.pop();
                }
                else if(ch==']' && topch=='['){
                    s.pop();
                }  
                else{
                    cout<<"\nINVALID";
                }              
            }
            else{
                cout<<"\nINVALID";
            }
        }
    }
    if(s.empty())
    {cout<<"\nVALID";}
    else{
        cout<<"\nINVALID";
    }
    

return 0;
}