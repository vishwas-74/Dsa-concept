#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<3;i++){
        v.push_back(i);
    }
    cout<<"last element of nums is:"<< v.back();

}