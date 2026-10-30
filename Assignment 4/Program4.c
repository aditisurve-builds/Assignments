#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibilty(int iAge)
{
    if(iAge < 18)
    {
        printf("Not Eligible for voting \n");
    }
    else
    {
        printf("Eligible for voting\n");
    }
}

int main()
{ 
    int iValue = 0;
     
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    CheckVotingEligibilty(iValue);

    return EXIT_SUCCESS;
}
