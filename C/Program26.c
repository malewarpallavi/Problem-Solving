//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  File name :     Program26.c                                         //
//  Description :   Used to display sum of digits from given number     //
//  Author :        Pallavi Omprakash Malewar                           //
//  Date :          27/06/2025                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int SumOfDigits(int iNumber)
{
    int iSum = 0 ;
    int iDigit = 0 ;

    while( iNumber != 0 )
    {
        iDigit = iNumber % 10 ;
        iNumber = iNumber / 10 ;
        iSum = iSum + iDigit ;
    }

    return iSum;
}


int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : ") ;
    scanf("%d" , &iValue) ;

    iRet = SumOfDigits(iValue) ;

    printf("Summation of digits are : %d\n" , iRet) ;

    return 0 ;

}