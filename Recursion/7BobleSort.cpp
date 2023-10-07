#include<iostream>
using namespace std;

void Boblesort(int arr[],int n){
    if(n==1)
        return;
    for (int  i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    Boblesort(arr,n-1);
    
}

void boblesort2(int arr[],int n,int j){
    if(n==1)
        return;
    if(j==n-1){
        boblesort2(arr,n-1,0);
        return;}
    if(arr[j]<arr[j+1])
        swap(arr[j],arr[j+1]);
    boblesort2(arr,n,j+1);
}

int main(){
    int arr[]={2,6,7,19,3,3,16,94,84,46,31,3,6,4,894,9,1,31};
    int n=sizeof(arr)/sizeof(int);
    
    boblesort2(arr,n,0);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Boblesort(arr,n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}