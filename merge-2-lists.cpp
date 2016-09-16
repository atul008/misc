#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    node* next;
} node;

void addNode(node** head,int d){
    node* n = new node;
    n->data = d;
    n->next = (*head);
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

void mergeLists(node** head1,node** head2){
    if(*head1 != NULL && *head2 != NULL){
        if((*head1)->data > (*head2)->data){
            node** t = head1;
            head1 = head2;
            head2 = t;
        }
    }else{
        if(*head1 == NULL){
            *head1 = *head2;
            *head2 = NULL;
        }
        return;
    }

    node* curr1 = *head1;
    node* curr2 = *head2;
    node* prev1 = NULL;
    node* prev2 = NULL;

    while(curr1 != NULL && curr2 != NULL){
        if(curr2->data > curr1->data){
            prev1 = curr1;
            curr1 = curr1->next;
        } else {
            prev2 = curr2->next;
            prev1->next = curr2;
            curr2->next = curr1;
            prev1 = curr2;
            curr2 = prev2;
        }
    }

    if(curr1 == NULL){
        prev1->next = prev2;
    }


}

int main(){

    node* head1,*head2;
    head1 = NULL,head2 = NULL;
    addNode(&head1,8);
    addNode(&head1,7);
    addNode(&head1,3);
    addNode(&head1,1);

    addNode(&head2,6);
    addNode(&head2,4);
    addNode(&head2,2);

    printList(head1);
    printList(head2);
    mergeLists(&head1,&head2);
    printList(head1);
    return 0;
}

