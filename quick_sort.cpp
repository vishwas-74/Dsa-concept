#include<iostream>
using namespace std;
// partition function
int partition(int arr[],int sidx,int eidx){
    // int pivotEle=arr[sidx];
     // randomized pivot point
     int pivotEle=arr[(sidx+eidx)/2];
    int count=0;
    for(int i=sidx;i<=eidx;i++){
        if(i==(sidx+eidx)/2) continue;
        if(arr[i]<=pivotEle) count++;
    }
    int pivotIdx=count+sidx;
    swap(arr[(sidx+eidx)/2],arr[pivotIdx]);
    int i=sidx,j=eidx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
       else  if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++,j--;
        }
    }
    return pivotIdx;
}
   
void quickSort(int arr[],int sidx,int eidx){
    // base case
   if(sidx>=eidx) return;
    int pivotIdx=partition(arr,sidx,eidx);
    //magic aka recursion
   quickSort(arr,sidx,pivotIdx-1);
   quickSort(arr,pivotIdx+1,eidx);
}
int main(){
    int arr[]={5,1,0,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // this give us a array after sorting
    quickSort(arr,0,n-1);
   cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}