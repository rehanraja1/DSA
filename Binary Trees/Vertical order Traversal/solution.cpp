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
    vector<vector<int>> verticalOrderTraversal(Node* root) {
        map<int,map<int,vector<int>>> m;
        queue<pair<Node*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            Node* cur=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            m[col][row].push_back(cur->data);
            if(cur->left) q.push({cur->left,{row+1,col-1}});
            if(cur->right) q.push({cur->right,{row+1,col+1}});
        }
        vector<vector<int>> ans;
        for(auto col:m){
            vector<int> temp1;
            for(auto row:col.second){
                vector<int> temp2=row.second;
                sort(temp2.begin(),temp2.end());
                temp1.insert(temp1.end(),temp2.begin(),temp2.end());
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};