
#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not Eligible for admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter your marks:\n");
    scanf("%f", &fMarks);

    printf("Enter your age:\n");
    scanf("%d", &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
