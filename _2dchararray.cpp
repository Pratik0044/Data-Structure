#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Best approch to intilised the character array
    char A[][10]{
        "one",  // string is a linear character array;
        "two",
        "three",
        "four",
        "five",
    };
    //for print the character array 

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }

    return 0;


}