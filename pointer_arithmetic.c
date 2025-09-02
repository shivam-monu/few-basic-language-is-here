#include <stdio.h>

int main() {
    /* pointer arithmetic using integer pointer
    int a=5;
    int* ptr=&a;
    printf("the address of a is %u \n",ptr);
    ptr++;  // increase the address by 4 because of int take the 4 bytes (increament by 4)
    printf("the value  of ptr is %u\n",ptr);*/

    char a='A';
    char* ptr=&a;
    printf("the address of a is %u \n",ptr);
    ptr++;  // increase the address by 4 because of int take the 4 bytes (increament by 4)
    printf("the value  of ptr is %u\n",ptr);
    return 0;
}