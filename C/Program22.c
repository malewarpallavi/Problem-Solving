/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program22.c                                        //
//  Description :   Used to Check if the Number is Prime or not        //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          19/07/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckPrimeNumber(int iNumber)
{
    int iCount = 0 ;

    if(iNumber < 0)             // Updator
    {
        iNumber = -iNumber;
    }

    for( iCount = 2 ; iCount <= (iNumber / 2) ; iCount++)
    {
        if((iNumber % iCount) == 0 )
        {
            break;
        }
    }

    return(iCount > (iNumber / 2));
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    bRet = CheckPrimeNumber(iValue);

    if(bRet == true)
    {
        printf("%d is a Prime Number.\n" , iValue);
    }    
    else
    {
        printf("%d is not a prime Number.\n" , iValue);
    }   

    return 0;

}