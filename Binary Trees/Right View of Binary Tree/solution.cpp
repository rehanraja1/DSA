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
    vector<int> rightView(Node* root) {
        queue<Node*> q;
        vector<int> ans;
        if(root==nullptr) return ans;
        q.push(root);
        while(!q.empty()){
            int temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                auto cur=q.front();
                temp=cur->data;
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};