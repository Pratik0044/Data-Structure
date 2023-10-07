#include<iostream>
using namespace std;

void ClearIthBit(int &n, int i){
    int mask=~(1<<i);
    n=(n & mask);

}
void UpadateIthBit(int &n, int i, int value){
    ClearIthBit(n,i);
    int mask= (value<<i);
    n=n|mask;
}


int main(){

    int n,value,i;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"\nWhich number of bit to be upadated: ";
    cin>>i;
    cout<<"\nEnter the new value of ith bit: ";
    cin>>value;
    UpadateIthBit(n,i,value);
    cout<<"\nAfter upadate ith Bit your number is: "<<n<<endl;

}