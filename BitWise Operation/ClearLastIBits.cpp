#include<iostream>
using namespace std;

void ClearLastIBits(int &n, int i){
    int a= -1;
    int mask = (a<<i);
    n=n & mask;
}

int main(){

    int a,i;
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<"\nEnter the number of bits which will be clear: ";
    cin>>i;

    ClearLastIBits(a,i);
    cout<<"\nAfter clear i bits the new number is : "<<a;

}