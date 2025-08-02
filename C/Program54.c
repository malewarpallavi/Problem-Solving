////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program54.c                                                                                   //
//  Description :   Program to accept character from user & check if it is small or not                           //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>


bool CheckSmall(char ch)
{
    bool bFlag = false;

    if((ch >= 'a') && (ch <= 'z'))
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}


int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : ");
    scanf("%c" , &cValue);

    bRet = CheckSmall(cValue);

    if(bRet == false)
    {
        printf("%c is not a Small Letter.\n" , cValue);
    }
    else
    {
        printf("%c is Small Letter.\n" , cValue);
    }

    return 0;
}