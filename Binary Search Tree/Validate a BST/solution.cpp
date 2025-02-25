#include <bits/stdc++.h>
using namespace std;

/*
class Node {
public:
  int data;
  Node *left, *right;

  Node(int data) {
      this->data = data;
      left = right = nullptr;
  }
};
*/
void in_order(Node* root,bool &ans,long min,long max){
    if(root==nullptr) return;
    in_order(root->left,ans,min,root->data);
    if(root->data<=min || root->data>=max){
        ans=false;
    }
    in_order(root->right,ans,root->data,max);
}
class solution{
public:
    bool validBST(Node* root) {
        bool ans=true;
        long min=LONG_MIN;
        long max=LONG_MAX;
        in_order(root,ans,min,max);
        return ans;
        
    }
};