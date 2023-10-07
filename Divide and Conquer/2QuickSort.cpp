#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e){
    int i=s-1;
    int pivot=arr[e];
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void QuickSort(vector<int> &arr, int s, int e){
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);

}
int main(){
    vector<int> arr={2,8,7,9,6,1,6,4,6,5,3,3,1,5,9};
    int e=arr.size()-1;
    QuickSort(arr,0,e);
    for(int element : arr){
        cout<<element<<" ";
    }
}