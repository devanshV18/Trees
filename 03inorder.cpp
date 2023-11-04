#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *left = NULL, *right = NULL;
  // Constructor initialised
    Node (int x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
};
void inorder_traversal (Node * root)
{
  if (root == NULL)
    return;
  // Visit Left subNode
  inorder_traversal (root->left);
  // Print the data
  cout << root->data << " ";
  // Print the right subNode
  inorder_traversal (root->right);
}

int main ()
{
  Node *root = new Node (15);
  root->left = new Node (12);
  root->right = new Node (54);
  root->left->left = new Node (8);
  root->left->right = new Node (13);
  root->left->left->left = new Node (5);
  root->right->left = new Node (18);
  inorder_traversal (root);
  return 0;
}