// Print numbers 1 to N recursively in 
// 1) Decreasing Order
// 2) Increasing Order
#include<iostream>
using namespace std;

void DecOrder(int n){
    if(n==0)
        return;
    cout<<n<<" ";
    DecOrder(n-1);
}
void IncOrder(int n){
   if(n==0)
        return;
    IncOrder(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a Value: ";
    cin>>n;
    DecOrder(n);
    cout<<endl;
    IncOrder(n);
}