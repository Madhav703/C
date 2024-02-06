#include <stdio.h>

main()
{
    int number;

    printf("Write a number here: ");
    scanf("%d", &number);

    for(int i=1; i<=10; i++)
        printf("\n%d*%d=%d", number,i,  i * number);


}