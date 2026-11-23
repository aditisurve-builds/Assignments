
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input\n");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 5 / 100;
        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter monthly salary:\n");
    scanf("%f", &fSalary);

    printf("Enter years of service:\n");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
