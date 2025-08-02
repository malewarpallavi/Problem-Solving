/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program19.c                                        //
//  Description :   Used to Check Perfect Number                       //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          19/07/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectNumber(int iNumber)
{
    int iCount = 0 ;
    int iSum = 0 ;

    if(iNumber < 0)             // Updator
    {
        iNumber = -iNumber ;
    }

    for( iCount = 1 ; iCount <= (iNumber / 2) ; iCount++)
    {
        if((iNumber % iCount) == 0 )
        {
            iSum = iSum + iCount ;
        }
    }

    if(iSum == iNumber)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}


int main()
{
    int iValue = 0 ;
    bool bRet = false ;

    printf("Enter Number : ") ;
    scanf("%d" , &iValue) ;

    bRet = CheckPerfectNumber(iValue) ;

    if(bRet == true)
    {
        printf("%d is a Perfect Number.\n" , iValue) ;
    }    
    else
    {
        printf("%d is not a Perfect Number.\n" , iValue);
    }   

    return 0;

}

// Time Complexity O(N/2)