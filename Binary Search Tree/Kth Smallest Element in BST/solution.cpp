#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

void in_order(Node* root,int k,int &count,int &ans){
    if(root==nullptr) return ;
    in_order(root->left,k,count,ans);
    if(count==k) ans=root->data;
    count++;
    in_order(root->right,k,count,ans);
}
class solution {
public:
    int kthSmallest(Node* root, int k) {
        int count=1;
        int ans=-1;
        in_order(root,k,count,ans);
        return ans;
        
    }
};#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

void in_order(Node* root,int k,int &count,int &ans){
    if(root==nullptr) return ;
    in_order(root->left,k,count,ans);
    if(count==k) ans=root->data;
    count++;
    in_order(root->right,k,count,ans);
}
class solution {
public:
    int kthSmallest(Node* root, int k) {
        int count=1;
        int ans=-1;
        in_order(root,k,count,ans);
        return ans;
        
    }
};