#include <bits/stdc++.h>
using namespace std;

/*class Node {
    public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};*/

int maxDownPath(Node* root, int &ans){
    if(root==nullptr) return 0;
    int l=maxDownPath(root->left, ans);
    if(l<0) l=0;
    int r=maxDownPath(root->right, ans);
    if(r<0) r=0;

    int x=root->data + l + r;
    ans=max(ans, x);

    return root->data+max(l,r);
}

int maxPathSum(Node* root){
    if(root==nullptr) return 0;
    int ans=-1e9;
    maxDownPath(root, ans);
    return ans;
}
/*
int main(){
    Node* root=new Node(15);
    root->left=new Node(-20);
    root->right=new Node(25);
    root->left->left=new Node(5);
    root->right->left=new Node(10);

    cout<< maxPathSum(root);
    return 0;
}*/