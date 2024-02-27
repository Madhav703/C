// Double dimension Arrays

#include <stdio.h>

int main()
{
    int arr[3][3], i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter a[%d][%d]:\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrinting Numbers:");
    
        for(i=0; i<3; i++)
        {
            printf("\n");
        for(j=0; j<3; j++)
        {
            printf("\t%d", arr[i][j]);
        }
        }   
    }
