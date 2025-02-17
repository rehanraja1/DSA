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
bool isleaf(Node* node){
    if(node->left==nullptr && node->right==nullptr) return true;
    return false;
}
void leafBoundary(Node* root,vector<int> &ans){
    Node* cur=root->left;
    while(cur){
        if(isleaf(cur)==false) ans.push_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
    }
}
void leafnodes(Node* root,vector<int> &ans){
    if(root==nullptr) return;
    if(isleaf(root)) ans.push_back(root->data);
    leafnodes(root->left,ans);
    leafnodes(root->right,ans);
}
void righBoundary(Node* root,vector<int> &ans){
    Node* cur=root->right;
    vector<int> temp;
    while(cur){
        if(isleaf(cur)==false) temp.push_back(cur->data);
        if(cur->right) cur=cur->right;
        else cur=cur->left;
    }
    int len=temp.size();
    for(int i=len-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}
class solution{
public:
    vector<int> boundaryTraversal(Node* root) {
        vector<int> ans;
        if(root==nullptr) return ans;
        if(isleaf(root)==false) ans.push_back(root->data);
        leafBoundary(root,ans);
        leafnodes(root,ans);
        righBoundary(root,ans);
        return ans;
    }
};