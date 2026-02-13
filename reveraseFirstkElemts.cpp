#include<iostream>
#include<queue>
#include<stack>
using namespace std;
  
//........display for the queue...
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

// function for reversing the git ..

void  kreverse(queue<int>&q,int k){
    int n=q.size();

    stack<int>st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    kreverse(q,4);
    display(q);
}