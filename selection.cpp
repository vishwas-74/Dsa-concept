#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,2,4};
    for(auto x:arr){
        cout<<x<<" ";
    }
    int n=sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
        int mini=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mini){
                mini=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    cout<<endl;
     for(auto x:arr){
        cout<<x<<" ";
    }
}