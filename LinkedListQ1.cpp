// ****************************DOUBLY LINKED LIST*******************************
#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;
     
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// ************************INSERTION**************************
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        n->prev=NULL;
    }

    head=n;
}

void insertAtEnd(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void insertAtMid(node* &head, int val, int pos){
    node* n=new node(val);
    node* temp=head;
    int count=1;

    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=n;
    n->prev=temp->prev;
    n->next=temp;
    temp->prev=n;

}

void display(node* head){
    node* temp=head;
    cout << "NULL->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtHead(head, 5);
    display(head);

    insertAtMid(head, 9, 3);
    insertAtMid(head, 10, 5);
    display(head);
    return 0;
}