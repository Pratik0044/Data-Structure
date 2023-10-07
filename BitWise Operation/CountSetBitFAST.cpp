//How to count number of set bit in any number;
#include<iostream>
using namespace std;

int CountSetBit(int n){
    int count=0;
    while (n>0)
    {
        n =(n&(n-1));
        count++;
    }

    return count;
}


int main(){
    int n;
    cout<<"Enter a number to be chek: ";
    cin>>n;
    int cnt=CountSetBit(n);
    cout<<"Total number fo set Bit is : "<<cnt;

}