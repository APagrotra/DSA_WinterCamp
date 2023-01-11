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
    if(root != NULL){
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int getSize(node* root){
    if(root == NULL){
        return 0;
    }else{
        return 1 + getSize(root->left) + getSize(root->right);
    }
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

    inorder(root);
    cout << endl;
    int count = 0;
    cout << getSize(root) << endl;
    return 0;
}