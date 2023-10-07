/*You are given two 32-bit number, N and M , and two bit position i and j,
Write a method to set all bits bitween i and j in N equal to M.
M(becomes a substring of N locationed ar startin at j)*/

#include<iostream>
using namespace std;

void ClearRangeOfBit(int &n, int i, int j){
    int maskA=(-1)<<(j+1);
    int maskB=(1<<i)-1;
    int mask=maskA | maskB;
    n=n & mask;
    
}
void ReplaceBit(int &N,int M, int i,int j){
    int mask=(M<<i);
    ClearRangeOfBit(N,i,j);
    N=N|mask;
}
int main(){
    int n,m,i,j;
    n=15;
    m=2;
    i=1;j=3;
    ReplaceBit(n,m,i,j);
    cout<<"\nAfter clear bits the new number is : "<<n;


}