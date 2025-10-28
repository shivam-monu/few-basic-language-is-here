#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[19];
};

void  show(struct employee e); // function protype

void show(struct employee e){
    printf("code is %d\nsalary is %f\n Name is %s\n",e.code,e.salary,e.name);
}

int main() {
    struct employee e1;
    e1.code=4522;
    strcpy(e1.name,"shivam");
    e1.salary=54.44;
    show(e1);
    

    return 0;
}