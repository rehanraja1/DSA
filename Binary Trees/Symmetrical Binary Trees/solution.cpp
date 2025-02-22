#include <bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};
*/
bool check(Node* node1,Node* node2){
    if(node1==nullptr && node2==nullptr) return true;
    if(node1==nullptr && node2!=nullptr) return false;
    if(node1!=nullptr && node2==nullptr) return false;
    if(node1->data!=node2->data) return false;
    return check(node1->left,node2->right) && check(node1->right,node2->left);
}
class solution{
public:
    bool symmetric(Node* root) {
        if(root==nullptr) return true;
        return check(root->left,root->right);
      
    }
};