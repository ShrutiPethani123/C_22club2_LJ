#include <stdio.h>

void main()
{
    int a[5] = {11, 22, 33, 44, 55};

    printf("\n%d\n", a);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", &a[i]);
    }

    printf("\n%d", *a);
    printf("\n%d", *(a + 1));
    printf("\n%d\n", *(a + 2));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(a + i));
    }

    *(a+2)=400;
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(a + i));
    }
}