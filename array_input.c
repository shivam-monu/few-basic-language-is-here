#include<stdio.h>
int main(){
    int marks[5];
    printf("enter marks of 5 students\n");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);

    printf("marks 0 and marks 1 and marks 2 and marks 3 and marks 4 and marks 5 is %d %d %d %d %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
}