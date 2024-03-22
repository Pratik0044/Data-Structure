#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

vector<int> nexGreaterElement(int arr[]){
    int n=11;
    stack<int> st;
    vector<int> ans;
    for(int i=0; i<2*n-1;i++){
        while (!st.empty() && st.top()<= arr[i])
        {
            st.pop();
        }
        if(i<n){
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans.insert(ans.begin()+i,-1);
            }
        }
        st.push(arr[i]);
        
    }
    return ans;
}

int main(){
    int arr[]={4,6,8,7,2,9,4,2,6,1,0};
    vector<int> a ;
    a=nexGreaterElement(arr);
    for(int i=a.size()-1;i<=0;i--){
        cout<<a[i]<<" ";
    }
}