#include <stdio.h>

main()
{
    int i, n, s, l, b;

    printf("Write a number: ");
    scanf("%d", &n);

    for(l=n-1; l>=1; l--)
    {
        for(b=1; b<=n-l; b++)
        printf(" ");
    
    for(s=1; s<=2*l-1; s++)
    printf("*");
    printf("\n");

    }
}