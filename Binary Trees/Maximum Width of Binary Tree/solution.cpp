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
    int maxWidth(Node* root) {
        if(root==nullptr) return 0;
        queue<pair<Node*,long long>> q;
        q.push({root,0});
        int ans=-1;
        while(!q.empty()){
            int len=q.size();
            int width;
            int start_index=q.front().second;
            for(int i=0;i<len;i++){
                long long index=q.front().second - start_index;
                auto cur=q.front().first;
                q.pop();
                width=index+1;
                if(cur->left) q.push({cur->left,(2*index)+1});
                if(cur->right) q.push({cur->right,(2*index)+2});
            }
            ans=max(ans,width);
        }
        return ans;
    }
};