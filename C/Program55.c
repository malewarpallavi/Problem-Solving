////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program55.c                                                                                   //
//  Description :   Program to accept character from user & check if it is digit or not                           //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    bool bFlag = false;

    if((ch >= '0') && (ch <= '9'))
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

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("%c is digit\n" , cValue);
    }
    else
    {
        printf("%c is not a digit\n" , cValue); 
    }

    return 0;
}