/*

12. Write a program to input electricity unit charge and calculate the total 
	electricity bill according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit

	300 
	50 - 0.50 = 25
	100 - 0.75= 75
	100 - 1.20 = 120
	50 - 1.50  = 75   
    
    total = 295

    30
    30 - 0.50 = 15

    total = 15

    120
    50 - 0.50  = 25
    70 - 0.75 = 52.5

    total = 77.5
*/

#include<stdio.h>

void main()
{
    float unit,bill;
    printf("Enter a no: ");
    scanf("%f",&unit);

    if(unit<=50)
    {
        bill=unit*0.50;
    }
    else if(unit<=150)
    {
        bill = 50*0.50 + (unit-50)*0.75;
    }
    else if(unit<=250)
    {
        bill = 50*0.50 + 100*0.75 + (unit-150)*1.20;

    }else{

        bill = 25 + 75 + 120 + (unit-250)*1.50;
    }

    printf("Total bill is %f",bill);
}