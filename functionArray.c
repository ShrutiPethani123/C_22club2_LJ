#include<stdio.h>

void addArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]+5;
    }
}

int* mulArray(int *a,int n)
{
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]*2;
    }
    return b;
}

void add(int *x,int *y)
{
    *x=*x+10;
    *y=*y+10;
}

void main()
{
    int a[5]={2,4,2,5,7};
    // addArray(a,5);

    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n....\n");
    int *c;
    c=mulArray(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",i);
        printf("%d\t",*(c+i));
    }


    // int x=30;
    // int y=50;
    // add(&x,&y);
    // printf("%d %d",x,y);

}

/*

1. Take two values from user and swap that two values using function.
2. Take one array from user and make one function that take argument as array and return maximum element of array.

a - 5 8 9 6 31 5 6
max: 31

3. Take one string from user and pass that string into function and return length of that string.


*/