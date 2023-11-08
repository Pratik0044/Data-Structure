#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<"Size of Map : "<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m;
    m[1]= "Pratik";   //O(log(n)); it will varie i to the inpute ("pratik ") or other string
    m[2]="Suraj ji";
    m[3]="Ranjeet";
    m.insert({4,"Sajjan"});
    print(m);
    auto it = m.find(4);
    if(it==m.end())
        cout<<"NO Value."<<endl;
    else{
        cout<<(*it).first<< " "<<(*it).second;
    }
    m.erase(it);
    cout<<endl;
    print(m);

    
 }