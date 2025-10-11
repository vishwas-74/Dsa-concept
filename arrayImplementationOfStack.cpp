#include<iostream>
using namespace std;

// making our own class for stack using the array...

class Stack{
    public:
    int arr[5];
    int idx;
    // constructor.....
    Stack(){
        idx=-1;
    }

    // push function for stack......
    void push(int val){
        if(idx==4){
            cout<<"stack is full!"<<endl;
        }
        idx++;
        arr[idx]=val;
    }

    // pop function for stack...
      void pop(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
        }
        idx--;
      }

      // size function for stack...

      int size(){
        return idx+1;
      }

    // top element function for the stack...
    int top(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(50);
    st.push(60);

}