#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[19];
} emp;


int main() {
    emp e1;
    e1.code=45111;
    strcpy(e1.name,"shivam");
    e1.salary=540.2;
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}