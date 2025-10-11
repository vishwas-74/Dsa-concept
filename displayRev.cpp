#include<iostream>
#include<stack>
using namespace std;
 
// //function for printng the stack recursively.....

void displayRev(stack<int>&st){
    // base case
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displayRev(st);
    st.push(x);
}

//function for putting the element at the bottom recursively......

   void pustBottomRev(stack<int>&st,int val){
         if(st.size()==0){
            st.push(val);
            return;
         }
         int x=st.top();
         st.pop();
         pustBottomRev(st,val);
         st.push(x);

   }

   // function for revese the stack...
   void reverse(stack<int> &st){
    if(st.size()<=1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pustBottomRev(st,x);

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
    cout<<endl;
    pustBottomRev(st,80);
    cout<<endl;
    displayRev(st);
    cout<<endl;
    reverse(st);
    cout<<endl;
    displayRev(st);
   
    


}