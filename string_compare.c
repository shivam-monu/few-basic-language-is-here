#include <stdio.h>
#include <string.h>

int main() {
    int a=strcmp("far","joke");  //-1
    printf("%d\n",a);
    int b=strcmp("joke","far");   //1
    printf("%d",b);

    return 0;
}