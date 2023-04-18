#include<stdio.h>
int max_array(int a[],int n)
{   int max;
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<*(a+i))
        {
             max=*(a+i);
        }

    }
    return max;
}
void main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    
}