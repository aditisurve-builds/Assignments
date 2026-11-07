#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisible(int iNo)
{
    if((iNo % 3)== 0 && (iNo % 5 )== 0)
    {
        printf("Divisible by both \n");
    }
    else if((iNo % 5)== 0)
    {
        printf("Divisible by 5\n");
    }
    else if((iNo % 3)== 0)
    {
        printf("Divisible by 3 \n");
    }
    else
    {
        printf("Not Divisible \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

   CheckMultipleDivisible(iValue);

    return 0;
}
