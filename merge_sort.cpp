#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// function for the merge 
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        } 
        else{
            res[k++]=b[j++];
        }
    }
    if(i==a.size()){// a in the end
    while(j<b.size()){
        res[k++]=b[j++];
    }
    }
     if(j==b.size()){// b in the end
    while(i<a.size()){
        res[k++]=a[i++];
    }
    }
}
// function for the merge sort
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return ;
    int n1=n/2, n2=n-(n/2);
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
     for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // magic aka recursion
     mergeSort(a);
     mergeSort(b);

    // merge/
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
 vector<int>v={1,3,2,7,9,8};
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 mergeSort(v);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}