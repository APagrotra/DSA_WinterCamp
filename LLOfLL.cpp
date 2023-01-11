#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* down;
    node(int val)
    {
        data = val;
        next = NULL;
        down = NULL;
    }
};
class node2
{
    public:
    int data2;
    node2* next2;
    node2(int val)
    {
        data2 = val;
        next2 = NULL;
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
        return;
    }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;

}
void insertAtBottom(node*  &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        insertAtHead(head,val);
    }
        while(temp->down!=NULL){
            temp=temp->down;
        }
        temp->down=n;

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
void display2(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->down;
    }
    cout << "NULL";
    cout<< endl;
}


int main()
{
    node* head=NULL;
    // insertAtHead(head,10);
    insertAtTail(head,5);
    insertAtTail(head,11);
    insertAtTail(head,19);
    insertAtTail(head,20);
    insertAtTail(head,50);
    display(head);
    
    insertAtBottom(head,9);
    insertAtBottom(head,11);
    insertAtBottom(head,13); 
    display2(head);
    
    
    return 0;
}