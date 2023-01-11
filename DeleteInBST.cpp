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

node* getSucc(node* root){
    node* curr = root;
    curr = curr->right;
    while(curr->left != NULL && curr != NULL){
        curr = curr->left;
    }
    return curr;
}

node* deletionLeaf(node* root, int x){
    if(root == NULL){
        return root;
    }
    if(root->key > x){
        root->left = deletionLeaf(root->left, x);
    }
    else if(root->key < x){
        root->right = deletionLeaf(root->right, x);
    }
    else{
        if(root->left == NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            node* succ = getSucc(root);
            root->key = succ->key;
            root->right = deletionLeaf(root->right, succ->key);
        }
        return root;
    }
}

int main()
{
    int x;
    cin >> x;

    node* root = new node(40);
    insertKey(root, 10);
    insertKey(root, 20);
    insertKey(root, 30);
    insertKey(root, 50);
    insertKey(root, 60);
    insertKey(root, 70);

    inorderTrav(root);
    deletionLeaf(root, x);
    cout << endl;
    inorderTrav(root);
    return 0;
}