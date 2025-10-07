#include<iostream>
using namespace std;

 // making a node class
   class Node{
    public:
    int val;
    Node* next;
    Node(int val){
     this->val=val;
     this->next=NULL;
    }
   };
  
// function that prits the linked list

 void display(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
 int  size(Node *head){
    Node *temp=head;
    int n=0;
    while(temp!=NULL){
       n++;
        temp=temp->next;
    }
    return n;
 }

 /// recursively display of linked list

 void redisplay(Node*head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    redisplay(head->next);
 }

int main(){
   Node *a=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(40);
   a->next=b;
   b->next=c;
   c->next=d;

  // functio that print's the linked list

  display(a);
  cout<<"The size of the Linked list:"<<size(a)<<endl;
  redisplay(a);
}