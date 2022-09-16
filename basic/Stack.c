#include <stdio.h>
#include <stdlib.h>
int stack[5];
int top=-1;
void add(){
    if(top==4){
        printf("Stack is full");
    }
    else{
    int value;
    printf("\nEnter the number : ");
    scanf("%d",&value);
    top++;
    stack[top]=value;
    printf("Pushed Successfully\n");
    }
}
void pop(){
    if (top==-1){
        printf("Stack is empty\n");
    }
    else{
        top--;
        printf("Poped Successfully\n");
    }
}
void peek(){
    if (top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The peek value is : %d\n",stack[top]);
    }
}
void display(){
    if (top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int cho;
   while(1){ 
    printf("1) Add 2)Pop 3)Peek 4)Display\nEnter : ");
    scanf("%d",&cho);
    if (cho==1){add();}
    else if(cho==2){pop();}
    else if(cho==3){peek();}
    else if(cho==4){display();}
    else{break;}
    }
    return 0;
}