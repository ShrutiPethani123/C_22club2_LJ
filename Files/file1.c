/*

text file (.txt)
binary file (.bin)

mode:

r - read
w - write
a - append

rb - read in binary
wb - write in binary
ab - append in binary

fopen()
fclose()
fprinf()
fscanf()
fgetc()
fputc()
fgets()
fputs()
fseek()
ftell()
rewind()
fwrite()
fread()


*/

#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("abc.txt","a");
    char name[100];
    printf("Enter name: ");
    gets(name);
    
    if(fp==NULL)
    {
        printf("Can't open file!!");
    }else{
        fprintf(fp,"\nHello...");
        fprintf(fp,"%s",name);
    }
    fclose(fp);
    
}

/*

Make one file using C and add your details in that file.
name
id
address
college name
contact no

*/