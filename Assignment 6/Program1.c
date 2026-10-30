#include<stdio.h>
#include<stdlib.h>

void CalculateBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f)
                + ((iUnits - 200) * 10.0f);
    }

    printf("Electricity bill = Rs. %.2f\n", fBill);
}    
int main()
{
    int iUnits = 0;

    printf("Enter electricity units consumed:\n");
    scanf("%d", &iUnits);

    CalculateBill(iUnits);

    return 0;
}
