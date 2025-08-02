////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program24.c                                                   //
//  Description :   Used to count digits from given number                        //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          19/07/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountDigits(int iNumber)
{
    int iCount = 0;

    while( iNumber != 0 )
    {
        iNumber = iNumber / 10;
        iCount++;
    }
    
    return iCount;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n" , iRet);

    return 0;

}