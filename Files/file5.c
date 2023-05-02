#include<stdio.h>

/*
SEEK_SET - 0
SEEK_CUR - 1
SEEK_END - 2

*/

void main()
{
    FILE *fp;
    fp=fopen("abc.txt","r");
    printf("\nCurrent file pointer: %d",ftell(fp));
    fseek(fp,4,0);
    printf("\nCurrent file pointer: %d",ftell(fp));
    fseek(fp,3,SEEK_CUR);
    printf("\nCurrent file pointer: %d",ftell(fp));
    rewind(fp);
    printf("\nCurrent file pointer: %d",ftell(fp));
    

    

}