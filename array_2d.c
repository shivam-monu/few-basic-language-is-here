#include <stdio.h>

int main() {
    int arr[3][2];    //[row][column]
    for (int i = 0; i < 3; i++)      //rows is 3 so we take the i<3
    {
        for (int j = 0; j < 2; j++)   //column is 2 so we take the i<2
        {
            printf("enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)      //rows is 3 so we take the i<3
    {
        for (int j = 0; j < 2; j++)   //column is 2 so we take the i<2
        {
            printf("enter the value of arr[%d][%d] is %d\n",i,j,arr[i][j]);
        }
        
    }
    
    return 0;
}