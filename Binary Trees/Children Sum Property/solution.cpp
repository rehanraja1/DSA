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
class solution{
public:
    bool childrenSumProperty(Node* root) {
        if(root==nullptr) return true;
        if(root->left==nullptr && root->right==nullptr) return true;
        int child_sum=0;
        if(root->left) child_sum+=root->left->data;
        if(root->right) child_sum+=root->right->data;
        if(child_sum!=root->data) return false;
        return childrenSumProperty(root->left) && childrenSumProperty(root->right);
    }
};