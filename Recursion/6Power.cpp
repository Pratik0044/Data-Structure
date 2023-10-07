#include<iostream>
using namespace std;

int power(int a, int n){
    if(n==0)
        return 1;
    return a*power(a,n-1);
}

int FastPower(int a,int n){
    if (n==0)
    {
        return 1;
    }
    int subproblem = FastPower(a,n/2);
    int subprosqr=subproblem*subproblem;
    if (n&1)
    {
        return a*subprosqr;
    }
    else
        return subprosqr;
    
    
}

int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<FastPower(a,n)<<endl;
}