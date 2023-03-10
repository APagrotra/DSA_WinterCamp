#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int key;
    node* left;
    node* right;
    node(int val){
        key = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

bool checkBT(node* root){
    if(root==NULL){
        return true;
    }
    if((root->left && root->right == NULL) || (root->right && root->left == NULL)){
        return false;
    }
    return checkBT(root->left)&&checkBT(root->right);
}

int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    // root->right->right->left = new node(80);

    inorder(root);
    cout << "\n" <<checkBT(root) << endl;
}