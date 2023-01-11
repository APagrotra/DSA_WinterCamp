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

int maxEle(node* root){
    if(root == NULL){
        return INT_MIN;
    }else{
        return max(root->key , max(maxEle(root->right), maxEle(root->left)));
    }
}

int minEle(node* root){
    if(root == NULL){
        return INT_MAX;
    }else{
        return min(root->key , min(minEle(root->right), minEle(root->left)));
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
    cout << maxEle(root) << endl;
    cout << minEle(root) << endl;
    return 0;
}