#include<iostream>
#include<vector>
using namespace std;
int RotateSearch(vector<int> a,int k){
    int n=a.size();
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==k)   
            return mid;
        //logic
        if(a[s]<=a[mid]){//if it is true it mins the mid present on the L1 line
            if(a[s]<=k and k<=a[mid]){
                e=mid-1;
            }
            else{
                    s=mid+1;
            }
        }
        else{
            if(a[mid]<=k and k>=a[e]){
                s=mid+1;
            }
            else
                e=mid-1;
        }
    }

    return -1;
    
}
int main(){
    vector<int> arr={10,20,45,59,60,0,4,6,7,8};
    int key;
    cin>>key;
    cout<<RotateSearch(arr,key)<<endl;

}