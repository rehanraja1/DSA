#include <bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution{
public:
    vector<int> leftView(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<int> ans;
        if(root==nullptr) return ans;
        while(!q.empty()){
            int temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                auto cur=q.front();
                q.pop();
                temp=cur->data;
                if(cur->right) q.push(cur->right);
                if(cur->left) q.push(cur->left);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};