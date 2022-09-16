#include <stdio.h>
#define size 10

int queue[size];
int front=-1;
int rear=-1;

void enqueue(){
    if(rear==size-1){
        printf("Queue is full\n");
    }
    else{
        int value;
        printf("Enter the number : ");
        scanf("%d",&value);
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("Pushed\n");
    }
}
void dequeue(){
    if(front==-1 || front>rear){
        printf("Stack is empty\n");;
    }
    else{
        front++;
        printf("dequeued\n");
    }
}
void peek(){
    if(front==-1 || front>rear){
        printf("Stack is empty\n");;
    }
    else{
        printf("Peek value is %d\n",queue[front]);
    }

}
void display(){
    if(front==-1 || front>rear){
        printf("Stack is empty\n");;
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d  ",queue[i]);
        }printf("\n");
    }
}
int main(){
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    peek();
}