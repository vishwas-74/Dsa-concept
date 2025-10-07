#include<iostream>
#include<cmath>
using namespace std;

// function that define a numver is prime or not....

bool isPrime(int n){
    if(n<=1) return false;
   for(int i=2;i<=sqrt(n);i++){
     if(n%i==0) return false;
   }
   return true;
}
int main(){
  bool flag=isPrime(42);
  if(flag==false) cout<<"Number is not prime";
  else cout<<endl<<"Number is prime";
}