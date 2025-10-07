#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr)/4;
     for(auto ele:arr){
        cout<<ele<<" ";
    }
    vector<int>v(5,0);
    int x=0;
    for(int i=0;i<n;i++){
        int mini=INT_MAX;
        int minidx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else if(arr[j]<mini){
                mini=arr[j];
                minidx=j;
            }
         }
          arr[minidx]=x;
            v[minidx]=1;
            x++;
    }
    cout<<endl;
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}