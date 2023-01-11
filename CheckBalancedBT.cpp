#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;
    node(int val)
    {
        key = val;
        left = NULL;
        right = NULL;
    }
};

bool balanceBT(node* root){
    if(root == NULL){
        return true;
    }
    if((root->left && root->right == NULL) || (root->right && root->left == NULL)){
        return false;
    }
    return balanceBT(root->left)&&balanceBT(root->right);
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    root->right->right->right = new node(170);
    cout << balanceBT(root);
    
    return 0;
}