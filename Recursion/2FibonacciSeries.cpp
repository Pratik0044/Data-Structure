//write a function to compute the nth fibonacci Number;

#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n==0 or n==1)
        return n;
    int f=Fibonacci(n-1)+Fibonacci(n-2);
    return f;
}

int main(){
    int a;
    cout<<"Enter a number for Fibnacci Series: ";
    cin>>a;

    cout<<Fibonacci(a)<<endl;
}

