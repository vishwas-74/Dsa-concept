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

   class Dll {
    public:
    Node*head;
    Node*tail;
    int size;
    Dll(){
        head=tail=NULL;
        size=0;
    }

    // function for inserting the nodes at the end
    void insertAtTail(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;// extra
            tail=temp;
        }
        size++;
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
    void insertAtHead(int val){
      Node* temp= new Node(val);
      if(size==0) head=temp=tail;
      else{
        temp->next=head;
        head->prev=temp;//EXTRA
        head=temp;
      }
      size++;

    }
     //  function for inserting at any idx

     void insertAtIdx(int idx,int val){
      if(idx<0 || idx>size) cout<<"Invalid idx";
      else if(idx==0) insertAtHead(val);
      else if(idx==size) insertAtTail(val);
      else {
        Node* temp=head;
        Node* t=new Node(val);
        for(int i=1;i<=idx-1;i++){
          temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        temp->next->prev=t;
        size++;
      }
     }

     //fuction for getting an element 

     int getAtIdx(int idx){
      if(idx<0 || idx>=size) {
        cout<<"Invalid";
        return -1;
     }
     else if(idx==0) return head->val;
     else if(idx==size-1)return tail->val; 
     else {
         Node*temp=head;
         for(int i=1;i<=idx;i++){
          temp=temp->next;
         }
         return temp->val;
     }
    }

    // function for deleting elementing the head

     void deleteAtHead(){
      if(size==0) cout<<"List is empty";
      head=head->next;
      size--;
     }

     // function for deleting the element at the tail
    void deleteAtTail(){
      if(size==0) cout<<"List is empty";
      Node*temp=head;
      while(temp->next!=tail){
           temp=temp->next;
      }
      temp->next=NULL;
      tail=temp;
      size--;
    }
          
   // function for deleting at any idx

   void deleteAtidx(int idx){
      if(size==0) {
        cout<<"List is empty";
        return;
      }
      else if(idx<0 || idx >=size ){
        cout<<"Invalid index";
        return;
      }
      else if(idx==0) deleteAtHead();
      else if(idx==size-1) deleteAtTail();
      else {
        Node*temp=head;
        for(int i=1;i<=idx-1;i++){
          temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
      }
   }

   };

   int main(){
    Dll * list= new Dll();
    list->insertAtTail(10);
    list->insertAtTail(20);
    list->insertAtTail(30);
    list->insertAtTail(40);
    list->display();
    list->insertAtHead(5);
    list->display();
   }