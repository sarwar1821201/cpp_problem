#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insertInTheFront(Node*& head, int data){
    Node *newNode= new Node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void printTheList(Node *head){

// check the all node
    while (head !=NULL)
    {
        /* code */
        cout<<head->data<<" ";
        head=head->next;
    }

    
}



int main(){

    Node* head = NULL;

    //insertINTheFront(head, 30);
    insertInTheFront(head, 30);
    insertInTheFront(head,25);
    insertInTheFront(head, 20);
    insertInTheFront(head, 10);

    printTheList(head);

    return 0;
}