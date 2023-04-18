/*

pointer: store the address of another variable


*/

#include<stdio.h>

void main()
{
    int a=50;

    printf("\n%d",a); // 50
    printf("\n%d",&a); // address of a

    // int *p = &a;

    int *p;
    p=&a;

    printf("\n%d",p);
    printf("\n%d",*p);

    int **q = &p;
    printf("\n%d",&p);
    printf("\n%d",q);
    printf("\n%d",*q);
    printf("\n%d",**q);


    *p=100;
    printf("\n%d",a);



    

}