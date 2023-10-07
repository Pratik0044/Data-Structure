
#include<iostream>

using namespace std;

int GetIthBit(int n, int i){
    int mask=(1<<i);
    return (n & mask) > 0 ? 1 : 0;
} 

void SetIthBit(int &n, int i){
    int mask=(1<<i);
    n=( n | mask);
}

void ClearIthBit(int &n, int i){
    int mask=~(1<<i);
    n=(n & mask);

}
int main(){
    int a;
    cout<<"Enter the Number: ";
    cin>>a;
    cout<<"\nEnter the i th Number for operation: ";
    int i;
    cin>>i;
   // int ans=GetIthBit(a,i);
   // cout<<"This is the i th bit: "<<ans<<endl;
   // SetIthBit(a,i);
   ClearIthBit(a,i);
    cout<<"\n"<<a;
    
}