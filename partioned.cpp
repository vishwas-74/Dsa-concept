#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
     arr[i]+=arr[i-1];
    }
    // checking array can be partioned or not
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"It cannot be partioned";
    else cout<<"It can be partioned at idx:"<<idx;
}