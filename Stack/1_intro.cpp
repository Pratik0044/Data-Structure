//This is introduction of Stack Data Structure using pre defind Data structure.
//STL="Standard Template Library"

#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<"\nThe size of stack: "<<st.size();
    

return 0;
}