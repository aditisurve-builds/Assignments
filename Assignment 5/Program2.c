#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("It is leap year \n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}

int main()
{ 
    int iValue = 0;
     
    printf("Enter the year \n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}
