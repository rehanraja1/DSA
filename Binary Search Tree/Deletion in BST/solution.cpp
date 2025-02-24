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

class solution{
public:
    Node* deletionBST(Node* root, int target) {
        //Write your code here...
        if(root==nullptr) return root;
        if(target<root->data){
            root->left=deletionBST(root->left,target);
            return root;
        }
        if(target>root->data){
            root->right=deletionBST(root->right,target);
            return root;
        }
        if(root->right==nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        Node* cur=root->right;
        while(cur->left) cur=cur->left;
        root->data=cur->data;
        root->right=deletionBST(root->right,cur->data);
        return root;
    }
};