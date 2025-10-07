#include<iostream>
using namespace std;
int main(){
    int sum[] = {1,2,3,4,5};
    int n=sizeof(sum)/sizeof(sum[0]);
    int *arr=sum;
    for(int i=0;i<n;i++){
        int print=arr[i];
        cout<<print<<" ";
    }
}