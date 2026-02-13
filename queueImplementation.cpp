#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// function for printing the queue...
void queuePrint(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        //  cout<<(q.front())<<" ";
        //  q.push(q.front());
        //  q.pop();
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }  
    cout<<endl;
}

// reverse queue using the stack....
     void reverseQueue(queue<int>&q){
        stack<int>st;
        while(q.size()>0){
            st.push(q.front());
            q.pop();
        }
         while(st.size()>0){
            q.push(st.top());
            st.pop();
        }
     }

     // function for remove elements present at even indices....
     void rmEvenEle(queue<int>&q){
        int n=q.size();
        for(int i=0;i<n;i++){
            if(i%2==0) q.pop();
            else {
                int x=q.front();
                q.pop();
                q.push(x);
            }
        }
     }
   
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    queuePrint(q);
    rmEvenEle(q);
    queuePrint(q);
    // reverseQueue(q);
    // queuePrint(q);
    // reverseQueue(q);
    // queuePrint(q);
    
    // cout<<q.size()<<endl;
    // q.pop();
    // cout<<q.size()<<endl;
}