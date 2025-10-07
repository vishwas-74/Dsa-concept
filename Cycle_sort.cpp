#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,6,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    // Apply cyclic sort
    // int i=0;
    // while(i<n){
    //     int correctIdx=arr[i]-1;
    //      if(i==correctIdx) i++;
    //     else swap(arr[i],arr[correctIdx]);
    // }


    // revist cycle sort

     int i=0;
     while(i<n){
        if(i==(arr[i]-1)) i++;
        else {
            swap(arr[i],arr[arr[i]-1]);
        }
     }
    cout<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
}