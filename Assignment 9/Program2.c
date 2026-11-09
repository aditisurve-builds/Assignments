#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;

    if(iNo > 0)
    {
        iCnt = iNo * 70;    
    }
    else
    {
        printf("Invalid Dollar");
    }
    return iCnt;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number of USD: \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR : %d",iRet);

    return EXIT_SUCCESS;
}
