////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program72.c                                                                                   //
//  Description :   Program to accept string from user & check frequency of specific character(Case Insensitive)  //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Input : deRm2dfr
// Char : R

// Output : 2 (Correct)

// Input Demo@23@re
// Char : @

// Output : 0 (Wrong)

// Case insensitive


#include<stdio.h>

int CharFrequency(char *str , char ch)
{
    int iCount = 0;
    int iDisplacement = 0;

    if((ch <= 'Z') && (ch >= 'A'))
    {
        iDisplacement = 32;
    }
    else if((ch <= 'z') && (ch >= 'a'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    while(*str != 0)
    {
        if((*str == ch) || (*str == ch + iDisplacement))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the Character : ");
    scanf(" %c" , &cValue);

    iRet = CharFrequency(Arr , cValue);

    printf("%c occurs %d times in given String.\n" , cValue , iRet);

    return 0;
}