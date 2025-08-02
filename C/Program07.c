/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program7.c                                         //
//  Description :   Used to Check Even Number                          //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          28/04/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckEvenNumber(int iNumber)
{
    bool bResult = false;

    if((iNumber % 2) == 0)
    {
        bResult = true;
    }

    else
    {
        bResult = false;
    }

    return bResult;

}


int main()
{
    int iValue = 0 ;

    bool bRet = false;

    printf("Enter the Number to Check if it is Even or Odd : ");
    
    scanf("%d",&iValue);

    bRet = CheckEvenNumber(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number.\n" , iValue);
    }

    else
    {
        printf("%d is Odd Number.\n" , iValue);
    }

    return 0;
    
}