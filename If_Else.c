/*

conditional statment:

1. if else
2. loops
3. switch



-> simple if
-> if else
-> nested if
-> else if ladder


*/


#include<stdio.h>

void main()
{
    int n;
    printf("Enter an no:");
    scanf("%d",&n);

    if(n>0)
    {
        if(n>10)
        {
            printf("%d is greater than 10",n);
        }else{
             printf("%d is less than 10",n);
        }
        
    }else if(n==0)
    {
        printf("Zero");
    }
    else{
        printf("%d is Negative",n);
    }
}


/*

1. Take two number from user and print minimum number of them.
2. Take Three number from user and print Maximum number of them.
3. Take one number from user and check number is divisible by 7 or not.
4. Take one number from user and check it is divisible by 3 and 11 or not.

    33 -> divisible by both
    12 -> not divisible

5. take one character from user and print it is vowel or consonant.

    vowel - a e i o u A E I O U

6. Take one character and check character is number(0-9) , alphabet or special character.

    3 -> number
    r -> alphabet
    & , $ -> special character

7. take one number from user and print number is even or odd.

8. take cost price and selling price from user and print profit or loss and how much ?

    cp - 100
    sp - 200

    profit - 100 rs

9. Take one number from user and print according week days.

    1 - sunday
    2 - Monday
    .
    .
    7 - Satuarday

10. Take one number and print month days according to number.

    1 - 31 days
    2 - 28/29 days
    3 - 30 days
    .
    .
    12 - 31 days

11. count total no of notes in given amount - 1552

	500 - 3
	200-0
	100-0
	50 - 1
	10-0
	5-0
	1 - 2
 


*/