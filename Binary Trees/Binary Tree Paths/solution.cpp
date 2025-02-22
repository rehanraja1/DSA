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
void paths(Node* root,vector<int> &v,vector<vector<int>> &ans){
    if(root==nullptr) return;
    v.push_back(root->data);
    if(root->left==nullptr && root->right==nullptr){
        ans.push_back(v);
        v.pop_back();
        return;
    }
     paths(root->left,v,ans);
     paths(root->right,v,ans);
     v.pop_back();
}
class solution{
public:
    vector<vector<int>> treepaths(Node* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        vector<int> v;
        paths(root,v,ans);
        return ans;
    }
};