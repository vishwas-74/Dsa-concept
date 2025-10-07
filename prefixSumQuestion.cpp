#include<iostream>
#include<vector>
using namespace std;

// function for whether i can partioned the array or not 

bool ischeck(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }

    for(int i=0;i<v.size();i++){
        if(2*v[i]==v[v.size()-1]) return true;
    }
    return false;
}

int main(){
    vector<int>arr={1,2,3,4,5,5};
    bool flag=ischeck(arr);

    if(flag){
        cout<<"The array can be partioned"<<endl;
    } else {
        cout<<"The array can't be partioned"<<endl;
    }
}