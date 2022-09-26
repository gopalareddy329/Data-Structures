#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node * insert(struct node *my_node,int data)
{
   if(my_node==NULL){
    return new_node(data);
   }
   else{
    if(data<my_node->data){
        my_node->left=insert(my_node->left,data);
    }
    else{
        my_node->right=insert(my_node->right,data);
    }
    return my_node;
   }
}

void inorder_traversal(struct node *my_node){
    if(my_node!=NULL){
        inorder_traversal(my_node->left);
        printf("%d ",my_node->data);
        inorder_traversal(my_node->right);
    }
}

void preorder_traversal(struct node *my_node){
    if(my_node!=NULL){
        printf("%d ",my_node->data);
        preorder_traversal(my_node->left);
        preorder_traversal(my_node->right);
    }
}
void postorder_traversal(struct node *my_node){
    if(my_node!=NULL){
        postorder_traversal(my_node->left);
        postorder_traversal(my_node->right);
        printf("%d ",my_node->data);
    }
}

int maxi(struct node *my_node){
    if(my_node->right==NULL){
        return my_node->data;
    }
    return maxi(my_node->right);
}
int min(struct node *my_node){
    if(my_node->left==NULL){
        return my_node->data;
    }
    return min(my_node->left);
}

struct node *remov(struct node *my_node,int value){
    if(my_node == NULL){
        return NULL;
    }
    else{
        if(value==my_node->data){
            if(my_node->left==NULL && my_node->right==NULL){
                my_node=NULL;
            }
            else if(my_node->left==NULL){
                my_node=my_node->right;
            }
            else if(my_node->right==NULL){
                my_node=my_node->left;
            }
            else{
                int mini = min(my_node->right);
                my_node->data = mini;
                my_node->right=remov(my_node->right,value);
            }

        }
        else if(value>my_node->data){
               my_node->right=remov(my_node->right,value); 
        }
        else{
            my_node->left=remov(my_node->left,value);
        }
        return my_node;
    }
}


int main(){
    struct node *root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,8);
    root=insert(root,12);
    root=insert(root,16);
    root=insert(root,25);
    inorder_traversal(root);
    printf("\n");
    preorder_traversal(root);
    printf("\n");
    postorder_traversal(root);
    int max=maxi(root);
    int mini=min(root);
    printf("\n%d ",mini);
    printf("\n%d \n",max);
    root=remov(root,8);
    preorder_traversal(root);

}