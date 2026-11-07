#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define False 0

bool CheckEven(int iNo)
{
    if((iNo % 2)== 0 )
    {
       printf("It is even \n");
    }
    else
    {
        printf("It is Odd\n");
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        return true;
    }
    else
    {
        return false;
    }

    return EXIT_SUCCESS;

}
