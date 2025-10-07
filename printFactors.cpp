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

// function for printing the factor's

   void printFactor(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){ cout<<i<<" ";
        if(i!=sqrt(n)) cout<<n/i<<" ";
    }
}
   }
int main(){
     printFactor(60);
}