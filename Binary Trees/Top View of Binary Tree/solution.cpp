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
    vector<int> topView(Node* root) {
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto x=q.front();
            auto cur=x.first;
            int col=x.second;
            q.pop();
            if(m.find(col)==m.end()) m[col]=cur->data;
            if(cur->left) q.push({cur->left,col-1});
            if(cur->right) q.push({cur->right,col+1});
        }
        vector<int> ans;
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
    
};