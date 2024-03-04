/* 
Question:- Reverse first k element in queue?
Answer:- step 1- k element ko stack me dal lo
         step 2- fir sabko queue me push kar lo
         step 3- fir n-k element ko pop karake usime fir se push kar do
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseK(queue<int> &q, int k){
    stack<int> st;
    int n=q.size();
    int count=0;
    if(k==0 || k>n || k<0){
        cout<<"Invalid value of K."<<endl;
        return;}
        
    while (!q.empty())
    {
        int temp=q.front();
        q.pop();
        st.push(temp);
        count++;

        if(count==k)
            break;
    }

    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);
    }

    count=0;
    while (!q.empty() && n-k!=0)
    {
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k)
            break;
    }
    

}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseK(q,-5);
    
    while (!q.empty())
    {
        cout<<" "<<q.front()<<" "<<endl;
        q.pop();
    }
}