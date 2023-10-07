#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int> temp;
    while (i<=m && j<=e)
    {
        if (arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }        
    }
    while(i<=m)
        temp.push_back(arr[i++]);
    while(j<=e)
        temp.push_back(arr[j++]);
    
    int k = 0 ;
	for(int idx = s; idx <=e ;idx++){
		arr[idx] = temp[k++];
	}
}

void mergesort(vector<int> &arr,int s, int e){
    if(s>=e)
        return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
   
}

int main(){
    vector<int> arr={2,5,8,7,9,4,6,3,1,5,8,2};
    int n=arr.size();
    mergesort(arr,0,n-1);
    for(int x : arr){
        cout<<x <<" ";
    }
}