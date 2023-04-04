/*
   0 1 2
0- 4 5 6
1- 1 2 3

rows:2
col:3

2*3

a[0][0] =  4
a[1][2] = 3

a[row][col] 

*/

#include<stdio.h>

void main(){

    // int a[3][3]={1,2,3,4,5,6,7,8,9};
    // int a[2][3]={{2,3,4},{5,7,8}};

    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    int row,col ;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter cols: ");
    scanf("%d",&col);

    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}

/*


1. Take one 2D array from user and print primary and Secondary diagonal sum (if matrix size is n*n)

1 5 6 
7 8 6
1 9 3

PD: 1 8 3 (12) - i=j
SD: 6 8 1 (15) - i+j =n-1
    02 11 20 
2. Take one 2D array from user and check the matrix is upper Tringular matrix or not ?

1 2 3 4
0 2 3 3
0 0 2 8
0 0 0 9

yes


3. Take one 2D array from user and copy that array into another array.

1 5 6
1 2 3

B

1 5 6
1 2 3

4. Take one 2D arrat from user and print Transpose of that matrix.

1 2 3
8 9 4

1 8
2 9
3 4


*/




