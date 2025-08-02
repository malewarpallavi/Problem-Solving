////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program25.c                                                   //
//  Description :   Used to count even digits from given number                   //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          19/07/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

int CountEvenDigits(int iNumber)
{
    int iCount = 0;
    int iDigit = 0;

    while( iNumber != 0 )
    {
        iDigit = iNumber % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        
        iNumber = iNumber / 10;
    }

    return iCount;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of even digits are : %d\n" , iRet);

    return 0;

}