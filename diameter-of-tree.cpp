#include<bits/stdc++.h>
 using namespace std;

typedef struct node {
    int data;
    node* left;
    node* right;
 } node;

 node* newNode(int data){
    node* n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
 }

 void inorder(node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
 }


 int height(node* root){
    if(root == NULL ) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
 }

 void diameter(node* root,int& currDia){
     if(root == NULL) return;
    int l = height(root->left);
    int r = height(root->right);
    if(currDia < l + r + 1)
        currDia = l+r+1;
    diameter(root->left,currDia);
    diameter(root->right,currDia);
 }


 int main(){

    node* root;
    root = newNode(5);
    root->left = newNode(8);
    root->right = newNode(2);
    root->right->left = newNode(20);
    root->right->left->right = newNode(24);
    root->left->left = newNode(3);
    root->left->right = newNode(10);
    root->left->left->left = newNode(15);
    root->left->left->right = newNode(11);
    root->left->right->left = newNode(25);

    inorder(root); cout << endl;

    int currDia = -1;
    diameter(root,currDia);
    cout << " Diameter : " << currDia << endl;

 return 0;
 }
