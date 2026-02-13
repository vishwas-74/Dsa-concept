#include<iostream>
using namespace std;

class Queue{
 public:
  // data-members
  int f; // f->for front
  int b;  // b->for back 
  int s;
  vector<int>arr;
  // constructor 
  Queue(int size){
    f=0;
    b=0;
    vector<int>v(val);
    arr=v;
    s=0;
  }

  // push functionality...
  void push(int val){
    if(b==arr.size()){
        cout<<"Queue is Full";
        return;
    }
    arr[b]=val;
    b++;
    s++;
  }

  // pop functionality

  void pop(){
    if(s==0){
       cout<<"Queue is empty!";
       return;
    }
    f++;
    s--;
  }

  // front functionality
  int front(){
    if(s==0){
        cout<<"Queue is empty!";
       return -1;
    }
    return arr[f];
  }

  // back functionality
  int back(){
    if(s==0){
        cout<<"Queue is empty!";
       return -1;
    }
    return arr[b];
  }

  //size functionality
   int size(){
    return s;
   }

   // empty functionality
   bool isEmpty(){
    if(s==0) return true;
    else return false;
   }

    // display functionality
 void display(){
   for(int i=f;i<b;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
}