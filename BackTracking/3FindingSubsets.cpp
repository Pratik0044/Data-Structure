#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length())
        return a<b;
    return a.length()>b.length();
}
void FindSubsets(char *input,char *output,int i, int j,vector<string> &list){
    if(input[i]=='\0'){
        output[j]='\0';
        string temp(output);
        list.push_back(temp);
        return;
    }

    output[j]=input[i];
    FindSubsets(input,output,i+1,j+1,list);

    FindSubsets(input,output,i+1,j,list);
}
int main(){
    char input[100];
    char output[100];
    vector<string> list;
    cin>>input;
    FindSubsets(input,output,0,0,list);
    sort(list.begin(),list.end(),compare);

    for(auto x: list)
        cout<<x<<",";
}
