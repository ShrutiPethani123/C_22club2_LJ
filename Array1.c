/*
Array: collection of similar type of data.

a - 4 7 5 6 9 12 36

a[0]: 4
a[1]: 7
a[2]:5
a[6]: 36
a[7]: garbage value

-> index start with 0
-> index end with size-1




*/

#include<stdio.h>

void main()
{
    // int a[5]={1,3,2,4,5};

    // // printf("%d",a[1]);

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",a[i]);
    // }

    
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int b[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\nArray: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    int ele;
    printf("Enter element: ");
    scanf("%d",&ele);

    

    // int flag=1;
    // for(int i=0;i<n;i++)
    // {
    //     if(b[i]==ele)
    //     {
    //         printf("\nPresent at index %d",i);
    //         flag=0;
    //         break;
    //     }
    // }

    // if(flag==1)
    // {
    //     printf("\nElement not present");
    // }
}

/*

1. intialize one array and print that array.
2. Take one array from user and print that array.
3. Take one array form user and print sum of all elements.

a - 4 1 2 5 3 

sum: 15

4. Take one array from user and print all negative elements form user.

a ->  9 6 -2 -4 3 -1 5

o/p: -2 -4 -1 

5. Take one array from user and count all even and odd elements.

a : 4 7 5 3 2 16

odd: 3
even: 3

6. Take one array from user and find maximum element from array.

a - 8 7 45 96 12 3 7

max=96

7. Take one arry from user and check the number is present in array or not.

a - 5 78 6 3 2 1

ele: 5 -> present at index 0
ele: 45 -> not found

8. Take one array from user and copy one array to another array.

a - 4 8 5 6 2
b - 4 8 5 6 2

9. Take two array from user and perform given operations.


a - 4 85 3 2
b - 1 4 75 2
c - 5 89 78 4

1. compare size of array 

    if same proceed ahead
        2. 
            0. exit
            1. Addition
            2. sub
            3. mul
            4. div

    else invalid input


10. Take one array from user and add all even element into even array and odd element into odd array.


a - 4 8 5 6 2 1 3

odd[] - 5 1 3
even[] - 4 8 6 2 


11. Take one array from user and insert one element in that array.

a - 8 56 9 3 1 5
ind: 2
ele: 100

a - 8 59 100 9 3 1 5


12. Take one array from user and delete one element from that array.

n - 4 8 5 6 3 1
ind: 2
o/p: 4 8 6 3 1
*/