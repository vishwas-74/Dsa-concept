#include<iostream>
#include<queue>
#include<climits>
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


//fnx for constructing the tree..

Node* construct(int arr[],int n){
    Node*root=new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<n){
     Node*temp=q.front();
     q.pop();
     Node*l;
     Node*r;
     if(arr[i]!=INT_MIN) l=new Node(arr[i]);
     else l=NULL;
     if( j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
     else r=NULL;
  
      temp->left=l;
      temp->right=r;

      if(l)q.push(l);
      if(r)q.push(r);

      i+=2;
      j+=2;
    }

    return root;
}

// function for the level order traversal
//---> for this we need a queue
void levelorder(Node*root){
 queue<Node*>q;
 q.push(root);
 while(q.size()>0){
     Node*temp=q.front();
     q.pop();
     if(temp->left){
        q.push(temp->left);
     }
     if(temp->right){
        q.push(temp->right);
     }

     cout<<temp->val<<" ";
 }
}


int main(){
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
   
  Node*root=construct(arr,n);

  levelorder(root);
}