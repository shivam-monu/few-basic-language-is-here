#include <stdio.h>

int main() {
    int marks[5];
    printf("enter the marks of the student\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i=0;i<5;i++){
        printf("the address of marks at infex %d is %u\n",i,&marks[i]);
    }
    
    return 0;
}