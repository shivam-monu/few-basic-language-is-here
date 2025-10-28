#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 57;
    struct employee *ptr;
    ptr = &e1;
    printf("%d ", (*ptr).code);
    printf("%d ", ptr->code);

    return 0;
}