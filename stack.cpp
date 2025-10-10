#include<iostream>
#include<stack>
using namespace std;

// function for printing the stack .....
void print(stack<int> st){
    stack<int>temp;
    
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
     while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

// function for putting element at the bottom of the stack .....
void putAtBottom(stack<int>& st,int val){
    stack<int>temp;
    
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);

     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

// function for putting element at the idx of the stack .....
void putAtIdx(stack<int>& st,int val,int idx){
    stack<int>temp;
    
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);

     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;;
    cout<<st.top()<<endl;
    cout<<"Printng of the stack elements:"<<endl;
    print(st);
    putAtBottom(st,80);
    print(st);
    putAtIdx(st,35,4);
    print(st);
    cout<<"size of thr stack:"<<st.size();
    


}