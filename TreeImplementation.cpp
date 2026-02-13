#include<iostream>
using namespace std;

// Making the tree Data structure
class Node {
public:
 int val;
 Node*left;
 Node*right;
 Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
 }
};

 // function for display the linked list
void display(Node*temp){
    if(temp==NULL) return;
    cout<<temp->val<<" ";
    display(temp->left);
    display(temp->right);
}

//sum function for the sum of the tree
int sum(Node*temp){
    if(temp==NULL) return 0;
    return temp->val+sum(temp->left)+sum(temp->right);
}

// size function
int size(Node*temp){
    if(temp==NULL) return 0;
    return 1+size(temp->left)+size(temp->right);
}

// function for the maximum val
int max(Node*root){
    if(root==NULL) return 0;
    int leftMax=max(root->left);
    int RightMax=max(root->right);
    return max(root->val,max(leftMax,RightMax));
}

// function for the level of the tree.
int level(Node*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}

int main(){
  Node*a=new Node(1);
  Node*b=new Node(2);
  Node*c=new Node(3);
  Node*d=new Node(40);
  Node*e=new Node(5);
  Node*g=new Node(7);

  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->right=g;

  display(a);
  cout<<endl<<"Sum of the tree:"<<sum(a)<<endl;
  cout<<"Size of thr tree:"<<size(a)<<endl;
  cout<<"Max value of the tree:"<<max(a)<<endl;
  cout<<"Level of the tree:"<<level(a);
}