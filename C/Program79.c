/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         //
//  File name :     Program79.c                                                            //
//  Description :   Program to accept string  & Check if it is Palindrome or not           //
//  Author :        Pallavi Omprakash Malewar                                              //
//  Date :          27/06/2025                                                             //
//                                                                                         //
/////////////////////////////////////////////////////////////////////////////////////////////

// Case Sensitive

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    

    while(start < end)
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }

        start++;
        end--;
    }
    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s" , Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("%s is Pallindrome.\n" , Arr);
    }
    else
    {
        printf("%s is not Pallindrome.\n" , Arr);
    }

    return 0;
}