#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node * newNode(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node *));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
};
struct node * insert(struct node *my_node,int data)
{
    if(my_node == NULL)
        return newNode(data);
    else
    {
        if(data<my_node->data)
            my_node->left = insert(my_node->left,data);
        else
            my_node->right = insert(my_node->right,data);
        return my_node;
    }
};

void inorder_traversal(struct node *my_node)
{
    if(my_node == NULL) return;

    inorder_traversal(my_node->left);
    printf("%d ",my_node->data);
    inorder_traversal(my_node->right);
}
int main(){
    struct node *root=NULL;
    insert(root,5);
    insert(root,51);
    insert(root,56);
    insert(root,15);
    insert(root,25);
    inorder_traversal(root);
    return 0;
}