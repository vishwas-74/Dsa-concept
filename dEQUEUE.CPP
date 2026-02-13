#include<iostream>
using namespace std;

 // making of the doubly Linked list
class Node {
    public:
    int val;
    Node* next;
    Node*prev;
    Node( int val ){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
        
    }
};
   // now we are making the user defined data structure
   class dequeue {
    public:
    Node*head;
    Node*tail;
    int s;
    dequeue(){
        head=tail=NULL;
        s=0;
    }
    // function for inserting the nodes at the end
    void pushBack(int val){
        Node*temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;// extra
            tail=temp;
        }
        s++;
    }
    // display function for displaying the Double_linkedlist
    void display(){
          Node*temp=head;
          while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
          }
          cout<<endl;
    }
 // function for  inserting the the node at the beginning 
    void pushFront(int val){
      Node* temp= new Node(val);
      if(s==0) head=temp=tail;
      else{
        temp->next=head;
        head->prev=temp;//EXTRA
        head=temp;
      }
      s++;

    }
  // function for deleting elementing the head
     void popFront(){
      if(s==0) cout<<"List is empty";
      head=head->next;
      s--;
     }
     // function for deleting the element at the tail
    void popBack(){
      if(s==0) {
        cout<<"List is empty";
        return;
      } else if(s==1){
          popFront();
          return ;
      }
      Node*temp= tail->prev;
      temp->next=NULL;
      tail=temp;
      s--;
    }    
    // fornt
    int front(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    // back
     int back(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    // empty
    bool empty(){
        if(s==0){
            return true;
        }else return false;
    }
   };
   int main(){
      dequeue q;
      q.pushBack(10);
      q.pushBack(20);
      q.pushBack(30);
      q.pushBack(40);
      q.pushBack(50);
    //   q.display();
    q.pushFront(5);
    q.display();
    q.popFront();
    q.display();
    q.popBack();
    q.display();
   }