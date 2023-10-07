//how to chek a number n, is in power of 2 or not;
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to be chek: ";
    cin>>n;
    if (n&(n-1))
    {
        cout<<"not a power of 2."<<endl;
    }
    else
        cout<<"Yes, it is a power of 2."<<endl;
    
}