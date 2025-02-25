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
    Node* predecessor(Node* root, int target) {
        Node* pred=nullptr;
        while(root){
            if(root->data<target){
                pred=root;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return pred;
    }
};












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
public :
    Node* successor(Node* root, int target) {
        Node* suc=nullptr;
        while(root){
            if(root->data>target){
                suc=root;
                root=root->left;
            }
            else{
                root=root->right;
            }
        }
        return suc;
    }
};