//Write a function to check that given array  is sorted or not;
#include<iostream>
using namespace std;

bool IsSorted(int a[],int n){
    //Base Case
    if (n==0 || n==1)
    {
        return true;
    }
    // Recursion Case
    if (a[0]<a[1] && IsSorted(a+1,n-1))
        return true;
    return false;    
}

bool IsSorted2(int a[],int i, int n){
    if(i==n-1){
        return true;}
    if(a[i]<a[i+1] && IsSorted2(a,i+1,n))
        return true;
    return false;
}   

int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<IsSorted(arr,n)<<endl;   //Method one 
    cout<<IsSorted2(arr,0,n)<<endl; // Method two

}