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