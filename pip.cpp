#include<iostream>
using namespace std;
void pip(int n){
    if(n<=0) return;
    cout<<n<<" "; // pre
    pip(n-1);
    cout<<n<<" ";  //in 
    pip(n-1);
    cout<<n<<" ";  // post
}
int main(){
    pip(3);
}