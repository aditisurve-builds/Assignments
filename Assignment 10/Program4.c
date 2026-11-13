#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dTemp = 0.0;

    dTemp = (fTemp - 32) * (5.0/9.0);  

    return dTemp;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %lf\n",dRet);

    return EXIT_SUCCESS;
}
