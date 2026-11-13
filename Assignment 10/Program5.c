#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dNum = 0;

    dNum = 0.0929 * iNo;  

    return dNum;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
