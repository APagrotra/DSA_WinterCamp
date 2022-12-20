#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node*  &head, int val){
    node* n = new node(val);
    n->next=head;
    head = n;
    return;
}

void insertAtTail(node*  &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        insertAtHead(head,val);
    }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    
}
void reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* cnext = NULL;
    while(curr!=NULL){
        cnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=cnext;
    }
    head=prev;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout << "NULL";
    cout<< endl;
}


int main()
{
    node* head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,40);
    insertAtTail(head,30);
    insertAtTail(head,50);
    insertAtTail(head,70);
    insertAtTail(head,60);
    display(head);
    reverse(head);
    display(head);
    
    
    return 0;
}