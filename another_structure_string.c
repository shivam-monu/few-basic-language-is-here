#include <stdio.h>

int main()
{
    //   char st[]={'a','b','c','\0' };       //  \0 is a null character
    char st[] = "abc"; // same as doing char st[]={'a','b','c','\0' };
    for (int i = 0; i < 3; i++)
    {
        printf("first character is %c\n", st[i]);
    }

    return 0;
}