#include <stdio.h>



int main() 
{

    int i, n, s, l, b;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(l=1; l<=n; l++)
    {
        for(b=1; b<=n-l; b++)
        printf(" ");

    for(s=1; s<=2*l-1; s++)
        printf("*");
        printf("\n");
    }

}