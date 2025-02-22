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
    Node* lca(Node* root, Node* p, Node* q) {
        if(root==nullptr || root==p || root==q) return root;
        Node* l=lca(root->left,p,q);
        Node* r=lca(root->right,p,q);
        if(l==nullptr) return r;
        if(r==nullptr) return l;
        return root;
    }
};