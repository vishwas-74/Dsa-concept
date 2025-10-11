#include<iostream>
#include<stack>
using namespace std;
 
//function for printng the stack recursively.....

void displayRev(stack<int>&st){
    // base case
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displayRev(st);
    st.push(x);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    displayRev(st);
   
    


}