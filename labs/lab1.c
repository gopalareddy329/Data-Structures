#include <stdio.h>

int main(){
    int i,size,j;
    printf("\nEnter the size of number : ");
    scanf("%d",&size);
    int array[size];
    //Traversing
    for(i=0;i<size;i++){
        printf("\nEnter the %d value ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++){
        printf("%d) %d \n",i+1,array[i]);
    }
    //Insertion
    int pos,value;
    printf("\nEnter the position of element to insert : ");
    scanf("%d",&pos);
    printf("\nEnter the value : ");
    scanf("%d",&value);
    for(i=size;i>=pos-1;i--){
        array[i]=array[i-1];
    }
    array[pos-1]=value;
    size++;
    printf("\nAfter insertion : \n");
    for(i=0;i<size;i++){
        printf("%d) %d \n",i+1,array[i]);
    }
    //Deletion
    printf("\nEnter the position of element to Delete : ");
    scanf("%d",&pos);
    for(i=pos-1;i<size;i++){
        array[i]=array[i+1];
    }
    size--;
    for(i=0;i<size;i++){
        printf("%d) %d \n",i+1,array[i]);
    }
    //sorting
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]>array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nAscending order : \n");
    for(i=0;i<size;i++){
        printf("%d) %d \n",i+1,array[i]);
    }
    //reverse
    printf("\nDesending order : \n");
    for(i=0;i<size/2;i++){
        int temp;
        temp=array[i];
        array[i]=array[size-i-1];
        array[size-i-1]=temp;
    }
    for(i=0;i<size;i++){
        printf("%d) %d \n",i+1,array[i]);
    }
    return 0;
}