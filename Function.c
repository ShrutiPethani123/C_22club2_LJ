/*

function: block of code

syntax:

returnType FunctionName(Arguments)
{
    // block of code
}


types:

1. with return type with argument
2. with return type without argument
3. without return type with argument
4. without return type without argument

return type:

int 
float
double
char
char[]

int add(int a, int b)
{
    return a+b
}

1. Declaration
2. Defination
3. calling



*/

#include<stdio.h>

int add(int , int);

void display()
{
    printf("Hello.......");
}

void main()
{
    display();
    display();
    display();

    int ans = add(3,4);
    printf("Answer is %d",ans);

}

int add(int a, int b)
{
    return a+b;
}


/*

1. Make one function that take argument by user and print multiplication table of that number.

void printMulTable(int n)
{
    
}

o/p:

5 * 1 = 5






*/