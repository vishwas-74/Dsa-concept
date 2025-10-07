#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v={5,1,8,2,3};
  int n=v.size();
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
 int count=0;
  // brute force approach
  //tc=0(n2)
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]>v[j]) count++;
    }
  }
  cout<<"The number of the conversion are :"<<count;
}