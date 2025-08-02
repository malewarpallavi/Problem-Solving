/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program6.c                                         //
//  Description :   Used to print sum of N natural numbers             //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          28/04/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>

// Iteration 

int Calculate(int iNumber)
{
    int iCount = 0 , iSum = 0 ;

    for(iCount = 1 ; iCount <= iNumber ; iCount++)
    {
        iSum = iSum + iCount;
    }
    
    return iSum;
}


int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter the Value : ");
    
    scanf("%d",&iValue);

    iRet = Calculate(iValue);

    printf("Summation is : %d\n" , iRet);

    return 0;
}