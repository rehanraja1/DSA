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
    Node* search(Node* root, int target) {
        while(root){
            if(target==root->data){
                return root;
            }
            else if(target<root->data){
                root=root->left;
            }
            else root=root->right;
        }
        return root;
    }
};