//How to count number of set bit in any number;
#include<iostream>
using namespace std;

int CountSetBit(int n){
    int count=0;
    while (n>0)
    {
        int lastBit=(n&1);
         count += lastBit;
         n=n>>1;
    }

    return count;
}

//OR
/*
int CountSetBit(int n){
    int count=0;
   for(int i=0;i<32;i++){
       if(n&1)
       count++;
       n=n>>i;
   }
    return count;
}*/

int main(){
    int n;
    cout<<"Enter a number to be chek: ";
    cin>>n;
    int cnt=CountSetBit(n);
    cout<<"Total number fo set Bit is : "<<cnt;

}