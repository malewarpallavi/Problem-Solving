/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program8.c                                         //
//  Description :   Used to Check Divisibility                         //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          28/04/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNumber)
{

    if(((iNumber % 3) == 0) && ((iNumber % 5) == 0))
    {
        return true;
    }
    
    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0 ;

    bool bRet = false;

    printf("Enter number to check whether it is divisible by 3 & 5 : \n");
    
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5 & 3.\n" , iValue);
    }

    else
    {
        printf("%d is Not Divisible by 5 & 3.\n" , iValue);
    }

    return 0;

}