/* Sliding Window
Question:- Find first negative in every window of size k?
Answer:-   1. First k size windows PROCESS agar koi negative no mila to uska index store kar lenge
           2. remove out of window element
           3. new element insertion
*/

#include<iostream>
#include<deque>
using namespace std;


void solve(int arr[],int n,int k){
    deque<int> q;

    // process first window of size k
    for(int i=0;i<k;i++){
        if(arr[i]< 0){
            q.push_back(i);
        }

    }

    // remaining window ko process kro
    for(int i=k; i<n;i++){
        // answer dedo purani window ka
        if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

        //out of woindow element ko remove kardo
        while ((i - q.front() >= k) && (!q.empty()))
        {
            q.pop_front();
        }

        if(arr[i]< 0)
            q.push_back(i);

        
    }

    if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
}
int main(){
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size = 8;
    int k=3;

    solve(arr,size,k);
}