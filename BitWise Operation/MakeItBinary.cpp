#include<iostream>
using namespace std;

int MakeItBinary(int n){
    int ans=0;
    int p=1;
    while (n>0)
    {
        int lastBit=n&1;
        
        if (lastBit)
        {
            ans=ans+p;
        }
        p=p*10;
        n=n>>1; 

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<MakeItBinary(n)<<endl;
}