#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution {
public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        while(root){
            if(p->data<root->data && q->data<root->data){
                root=root->left;
            }
            else if(q->data>root->data && p->data>root->data){
                root=root->right;
            }
            else{
                return root;
            }
        }
        return root;
        
    }
};