#include<iostream>
using namespace std;

// making a node class
   class Node{// this is an user defined data type.
    public:
    int val;
    Node* next;
    Node(int val){
     this->val=val;
     this->next=NULL;
    }
   };

   // implementation of stack using the linked list.......

   class Stack{
    public:
    Node*head;
    int size;
    // constructor...
    Stack(){
        head=NULL;
        size=0;
    }

    // push.....
    void push(int val){
        Node*temp=new Node(val);
        temp->next=head;
        head=temp;
        size++; 
    }

    // pop...
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
        }
        head=head->next;
        size--;
    }

    // top .....
    int top(){
         if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int x=head->val;
        return x;
    }

     void print(Node*temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
     }
    // display the stack
    void display(){
        Node*temp=head;
        print(temp);
        cout<<endl;

    }

   };

   int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
  cout<< st.size<<endl;

    st.display();
   }