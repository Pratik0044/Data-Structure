#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key){
    if(n==0)
        return -1;
    if(arr[0]==key)
        return 0;
    int subindex=FirstOcc(arr+1,n-1,key);
    if(subindex!=-1)
        return subindex+1;
    return -1;
}

int main(){
    int A[]={5,8,9,7,5,6,4,1,2,3,9,4,5,8,2,};
    int n=sizeof(A)/sizeof(int);
    cout<<FirstOcc(A,n,4)<<endl;
}