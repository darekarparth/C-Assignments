#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

void traversePreOrder(struct node *t)
{
  if (t != NULL)
  {
    printf(" %d", t->data);
    traversePreOrder(t->left);
    traversePreOrder(t->right);
  }
}
void traverseInOrder(struct node *t)
{
  if (t != NULL)
  {
    traverseInOrder(t->left);
    printf(" %d", t->data);
    traverseInOrder(t->right);
  }
}
void traversePostOrder(struct node *t)
{
  if (t != NULL)
  {
    traversePostOrder(t->left);
    traversePostOrder(t->right);
    printf(" %d", t->data);
  }
}
void run()
{
struct node *root = newNode(1);

  root->left = newNode(2);
  root->right = newNode(3);
root->left->left = newNode(4);

  printf("The preorder traversal of the tree is: ");
  traversePreOrder(root);
  printf("\nThe inorder traversal of the tree is: ");
  traverseInOrder(root);
  printf("\nThe postorder traversal of the tree is: ");
  traversePostOrder(root);
}
int main()
{
  run();
}
