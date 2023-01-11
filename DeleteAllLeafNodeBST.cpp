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

node* insertBST(node* root, int x){
    if(!root){
        return new node(x);
    }
    if(root->key > x){
        root->left = insertBST(root->left, x);
    }
    else if(root->key < x){
        root->right = insertBST(root->right, x);
    }
    else{
        return root;
    }
}

void inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

node* deleteLeaf(node* root){
    if(!root)return root; 
    if((!root->left) && (!root->right)){ 
        delete root;
        return NULL;
    }
    root->left=deleteLeaf(root->left); 
    root->right=deleteLeaf(root->right);
    return root;
}

int main()
{
    node* root = new node(50);
    insertBST(root, 20);
    insertBST(root, 10);
    insertBST(root, 30);
    insertBST(root, 80);
    insertBST(root, 60);
    insertBST(root, 70);
    insertBST(root, 90);

    inorder(root);
    deleteLeaf(root);
    cout << endl;
    inorder(root);
    return 0;
}