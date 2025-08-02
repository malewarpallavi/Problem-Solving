////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program53.c                                                                                   //
//  Description :   Program to accept character from user & check if it is capital or not                         //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>


bool CheckCapital(char cValue)
{
    bool bFlag = false;

    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == false)
    {
        printf("%c is not a Capital Letter.\n" , cValue);
    }
    else
    {
        printf("%c is Capital Letter.\n" , cValue);
    }

    return 0;
}