#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        printf("Negative Number\n");
    }
    else if(iNo > 0)
    {
       printf("Positive Number\n"); 
    }
    else
    {
        printf("Neither Postive nor Negative\n");
    }
}

int main()
{ 
    int iValue = 0;
     
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
