#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(int iMarks)
{
    if(iMarks >= 90 && iMarks <= 100)
    {
        printf("A Grade\n");
    }
    else if(iMarks >= 75 && iMarks < 90)
    {
        printf("B Grade\n");
    }
    else if(iMarks >= 60 && iMarks < 75)
    {
        printf("C Grade\n");
    }
    else if(iMarks >= 40 && iMarks < 60)
    {
        printf("D Grade\n");
    }
    else if(iMarks >= 0 && iMarks < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your marks:\n");
    scanf("%d", &iValue);

    DisplayGrade(iValue);

    return 0;
}
