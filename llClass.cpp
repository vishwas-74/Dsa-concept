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

   // now we are making the user defined data structure

   class linkedList {
    public:
    Node*head;
    Node*tail;
    int size;
    linkedList(){
        head=tail=NULL;
        size=0;
    }

    // function for inserting the nodes at the end
    void insertAtTail(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    // display function for displaying the linkedlist

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
    linkedList *l1=new linkedList;
     l1->insertAtTail(10);
     l1->insertAtTail(20);
     l1->insertAtTail(30);
     l1->insertAtTail(40);
     l1->insertAtTail(50);
     l1->insertAtHead(5);
     l1->display();

     l1->insertAtIdx(4,45);
     l1->insertAtIdx(2,15);
     l1->display();
     cout<<l1->size<<endl;
     l1->deleteAtHead();
    l1->display();
     l1->deleteAtTail();
     l1->display();
     l1->deleteAtidx(3);
     l1->display();

     cout<<"The give idx value of Linkedlist:"<<l1->getAtIdx(2);
   }