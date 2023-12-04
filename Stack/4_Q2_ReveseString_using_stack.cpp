#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<char> st;
    cout<<"Size of the String : ";
    int n;
    cin>>n;
    char str;
    cout<<"Enter String charecter by charecter: ";
    for (int  i = 0; i < n; i++)
    {
        cin>>str;
        st.push(str);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}