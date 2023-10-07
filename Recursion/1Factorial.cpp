// Write a function to compute the factorial a number

#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if (n==0)
    {
        return 1;
    }
    // Recursion case
    int fact = n*factorial(n-1);
    return fact;
}

int main(){
    int a;
    cout<<"Enter a number for factorial: ";
    cin>>a;
    int ans =factorial(a);

    cout<<"The Factorial of "<<a<<" is : "<<ans;
}