#include<bits/stdc++.h>
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

class solution {
public:
    Node* insertionBST(Node* root, int target) {
        if(root==nullptr) return new Node(target);
        Node* cur=root;
        while(1){
            if(target<cur->data){
                if(cur->left==nullptr){
                    cur->left=new Node(target);
                    break;
                }
                cur=cur->left;
            }
            else{
                if(cur->right==nullptr){
                    cur->right=new Node(target);
                    break;
                }
                cur=cur->right;
            }
        }
        return root; 

    }
};