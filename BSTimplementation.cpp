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

node* insertKey(node* root, int x){
    if(root == NULL){
        return new node(x);
    }
    else if (root->key > x){
        root->left = insertKey(root->left, x);
    }
    else if(root->key < x){
        root->right = insertKey(root->right, x);
    }
    return root;
    
}

void inorderTrav(node* root){
    if(root != NULL){
        inorderTrav(root->left);
        cout << root->key << " ";
        inorderTrav(root->right);
    }
}

int main()
{
    node* root = new node(30);
    insertKey(root, 10);
    insertKey(root, 20);
    insertKey(root, 80);
    insertKey(root, 40);
    insertKey(root, 50);

    inorderTrav(root);
    return 0;
}