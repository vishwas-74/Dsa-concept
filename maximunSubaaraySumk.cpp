#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3};
    int n=sizeof(arr)/4;
    int k=3;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    int maxSum=INT_MIN;
    // caluclate maximum subarray sum using sliding window

    int i=1,j=k;
    while(j<n){
        int currSum=prevSum+arr[j]-arr[i-1];
        maxSum=max(currSum,prevSum);
        prevSum=currSum;
        i++,j++;
    }

    cout<<"The maximum subarray sum of size k:"<<maxSum;
}
