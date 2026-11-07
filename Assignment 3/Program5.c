
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool CheckVowel(char ch)
{
    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch =='u'))
    {
         return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character :\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);
    
    if(bRet == true)
    {
       printf("It is an Vowel\n");
    }
    else
    {
        printf("Not a Vowel\n");
    }

    return EXIT_SUCCESS;
}
