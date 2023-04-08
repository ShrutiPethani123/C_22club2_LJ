/*

Function:  - block of code

syntax:

return_Type Function_name (arguments)
{
     block of code
}
int add(int a , int b)
{

}

1. Declaration
2. Defination
3. calling

Types:

1. built in function/ pre define (prinf , scanf)
2. User define  function(UDF)
    1. with return type with argument
    2. without return type with argument
    3. with return type without argument
    4. without return type without argument


return type: int , float char , long , void


*/

#include<stdio.h>

void display();
int factorial(int);

void printData(int a)
{
    printf("data: %d\n",a);
}

int add(int a , int b)
{
    return a+b;
}

void main()
{
    display();
    printData(34);
    for(int i=1;i<5;i++){
        display();
    }

    int ans = add(5,6);
    printf("Answer is: %d\n",ans);
    printf("Answer is: %d\n",add(3,9));
    ans= factorial(6);
    printf("Factorial of 6 is %d\n",ans);
}

void display()
{
    printf("Hello.......\n");
}

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}


/*

1. take one number from user and make one function that return square of that number.
2. Make one function that take two argument and print all even number between that range.
3. check number is prime or not using function.
    int isPrime(int n)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }

*/