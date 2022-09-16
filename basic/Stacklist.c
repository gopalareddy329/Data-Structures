#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node{
    int data;
    struct node *link;
}*top;
void create(){
struct node *top=NULL;
printf("Node created\n");
}
void push(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(top==NULL){
        top=temp;
    }
    else{
        temp->link=top;
        top=temp;
    }
    printf("Pushed\n");
    count++;
}
void pop(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        struct node *p=top;
        top=top->link;
        printf("%d is popped\n",p->data);
        free(p);
        count--;
    }
}
void display(){
    if(top==NULL){
        printf("Stack is empty\n");
    }else{
    struct node *p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->link;
        printf("\n");
    }}
}
void peek(){
    if(top==NULL){
        printf("Stack is empty\n");
    }else{
        printf("%d\n",top->data);
    }
}
void distroy(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        struct node *p=top;
        while(top!=NULL){
        p=top;
        top=top->link;
        free(p);
        }
        printf("distroyed\n");
        count=0;
    }
}
void count1(){
    printf("No.of Elements in stack is %d\n",count);
}
int main(){
    int cho,i;
   while(1){ 
    printf("1) Create 2)Push 3)Pop 4)Display 5)peek 6)distroy 7)count\nEnter : ");
    scanf("%d",&cho);
    if (cho==1){create();}
    else if(cho==2){
        scanf("%d",&i);
        push(i);}
    else if(cho==3){pop();}
    else if(cho==4){display();}
    else if(cho==5){peek();}
    else if(cho==6){distroy();}
    else if(cho==7){count1();}
    else{break;}
    }
}