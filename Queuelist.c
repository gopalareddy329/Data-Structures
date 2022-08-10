#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *front;
struct node *rear;

void enqueue(int value){
    struct node *temp=(struct node*) malloc(sizeof(struct node*));
    temp->data=value;
    temp->link=NULL;
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->link=temp;
        rear=temp;
    }
    printf("Enqueued\n");
}

void dequeue(){
    struct node *p=front;
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        front=front->link;
        free(p);
        printf("Dequeued\n");
    }
}
void peek(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        printf("Peek value is %d\n",front->data);
    }
}
void display(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        struct node *p=front;
        while(p!=NULL){
            printf("%d ",p->data);
            p=p->link;
        }
        printf("\n");
    }

}
void distroy(){
    if(front==NULL){
        printf("Stack is empty\n");
    }
    else{
        struct node *p=front;
        while(front!=NULL){
            p=front;
            front=front->link;
            free(p);
        }
        rear=NULL;
        printf("distroyed\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    peek();
    distroy();
    display();
    peek();
}