#include <stdio.h>
#include <string.h>
struct empl{
    int code; 
    float salary;
    char name[27];
};


int main() {
    struct empl e1,e2;
    printf("enter the value of code\n");
    scanf("%d",&e1.code);
    printf("enter the value of salary\n");
    scanf("%f",&e1.salary);
    printf("enter the value of name\n");
    scanf("%s",&e1.name);
    printf("%d %f %s\n",e1.code,e1.salary,e1.name);

    printf("enter the value of code\n");
     scanf("%d",&e2.code);
    printf("enter the value of salary\n");
    scanf("%f",&e2.salary);
    printf("enter the value of name\n");
    scanf("%s",&e2.name);
    printf("%d %f %s",e2.code,e2.salary,e2.name);



    return 0;
}