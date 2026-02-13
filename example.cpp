#include<iostream>
using namespace std;
int func(int a){
    cout<<a<<endl;
    return 4;
}
int main(){
    int a=func(5);
    cout<<a;
}