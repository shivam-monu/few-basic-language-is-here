#include <stdio.h>

int main() {
    int arr[3][2]={{1,2},{54,5},{43,8}};
    printf("the 2d array is %d",arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of i%d and j%d is %d\n",i+1,j+1,arr[i][j]);
        }
        
    }
    
    
    return 0;
}