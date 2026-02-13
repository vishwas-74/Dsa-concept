#include<iostream>
#include<stack>
#include<string>
using namespace std;

int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int sol(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string str="100/5*2/4";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i]<=57) {
            val.push(str[i]-48);
        } else {
            if(op.size()==0 || prio(str[i])>prio(op.top())){
                op.push(str[i]);
            }else { // prio(s[i])<=prio(op.top())
                 while(op.size()>0 && prio(str[i])<=prio(op.top()) ){
                char ch=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=sol(val1,val2,ch);
                val.push(ans);   
              }
               op.push(str[i]);
            }
          
        }
    }

    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=sol(val1,val2,ch);
        val.push(ans);  
    }

    cout<<val.top();
}
