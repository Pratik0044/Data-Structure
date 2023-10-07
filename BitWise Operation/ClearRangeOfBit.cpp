#include<iostream>
using namespace std;

void ClearRangeOfBit(int &n, int i, int j){
    int maskA=(-1<<j);
    int maskB=(1<<i)-1;
    int mask=maskA | maskB;
    n=n & mask;
    
}

int main(){

    int n,i,j;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"\nEnter Range of bits [i,j] to be cleared : ";
    cin>>i>>j;

    ClearRangeOfBit(n,i,j);
    cout<<"\nAfter clear bits the new number is : "<<n;


}