#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> &arr,int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    
}
void fillArray(vector<int> &arr,int n,int i,int value){
    if(i==n){
        printArray(arr,n);
        return;
    }

    arr[i]=value;
    fillArray(arr,n,i+1,value+1);

    arr[i]=-1*arr[i];
}
int main(){
   vector<int> arr={0};
    int n;
    cin>>n;
    fillArray(arr,n,0,1);
    printArray(arr,n);

}