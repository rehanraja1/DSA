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

vector<vector<int>> zigZag(Node* root)
{
    vector<vector<int>> ans;
    if (!root) return ans;
    bool flag = true;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int len = q.size();
        vector<int> temp(len);

        for (int i = 0; i < len; i++)
        {
            Node* cur = q.front();

            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
            
            int index;
            if (flag) index = i;
            else index = len - 1 - i;
            temp[index] = cur->data;
        }

        ans.push_back(temp);
        flag = !flag;
    }
    return ans;
}

/*int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);
    root->right->right->right=new Node(8);

    vector<vector<int>> ans=zigZag(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<< ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/