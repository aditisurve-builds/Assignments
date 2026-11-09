#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet1 = 0, iRet2 = 0, iRet3 = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    iRet1 = EvenFactorial(iValue);
    iRet2 = OddFactorial(iValue);
    iRet3 = iRet1 - iRet2;

    printf("Even Factorial is : %d\n",iRet1);
    printf("Odd Factorial is : %d\n",iRet2);

    printf("Difference between Even and Odd Factorial is : %d\n",iRet3);

    return EXIT_SUCCESS;
}
