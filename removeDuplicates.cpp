#include<iostream>
#include<string>
#include<stack>
using namespace std;

string removeDuplicates(string &s){
    if(s.length()==0) return "";
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
   
    string ans="";
    while(st.size()>0){
        ans =st.top()+ans;
        st.pop();
    }
   return ans;
}


int main(){
    string s="aaabbcddaabffg";
    string ans= removeDuplicates(s);
    cout<<ans;
}