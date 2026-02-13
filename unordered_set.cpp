#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int>s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.begin(0);

     int target=10;

     if(s.find(target)!=s.end()){
        cout<<"exits"<<endl;
     }else cout<<"not exits"<<endl;
   for(auto x:s){
    cout<<x<<" ";
   }
}