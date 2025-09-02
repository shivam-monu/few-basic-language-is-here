#include<stdio.h>
int main(){
    int marks[9];
    printf("enter the nine students\n");
    for (int i=0;i<9;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<9;i++){
        printf("the value of marks at index %d is %d\n",i,marks[i]);
    }
}