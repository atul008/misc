#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    node* prev;
    node* next;
} node;

void addNode(node** head,int d){
    node* n = (node*)malloc(sizeof(node));
    n->data = d;
    n->next = (*head);
    n->prev = NULL;
    if(*head != NULL)
        (*head)->prev = n;
    *head = n;
}
void printList(node* head){
    node* t = head;
    while(t != NULL){
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
void reverse(node** head){
    node* curr = *head;
    node *temp = NULL;
    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if(temp != NULL)
        *head = temp->prev;
}

int main(){

    node* head;
    head = NULL;
    addNode(&head,4);
    addNode(&head,5);
    addNode(&head,6);
    printList(head);
    reverse(&head);
    printList(head);
    return 0;
}
