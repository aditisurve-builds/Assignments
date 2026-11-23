
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fPrice)
{
    float fDiscount = 0.0f;
    float fFinalPrice = 0.0f;

    if(fPrice >= 5000)
    {
        fDiscount = (fPrice * 20)/100;
    }
    else if((fPrice >= 1000) && (fPrice < 5000))
    {
         fDiscount = (fPrice * 10)/100;
    }
    else 
    {
        fDiscount = 0;
    }

    fFinalPrice = fPrice - fDiscount;

    printf("Discount = %.2f\n", fDiscount);
    printf("Final price = %.2f\n", fFinalPrice);


}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
