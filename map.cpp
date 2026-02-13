#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
   unordered_map<string,int>m;
    m["sham"]=90;
    m["ram"]=80;
    m["keshav"]=34;

    m.erase("sham");

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
   
}
