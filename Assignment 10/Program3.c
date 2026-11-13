#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iDis = 0;

    iDis = 1000 * iNo;  

    return iDis;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Ditance in meter is : %d\n",iRet);

    return EXIT_SUCCESS;
}
