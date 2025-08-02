/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program18.c                                        //
//  Description :   Used to Display Sum of Factors of given number     //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          19/07/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumFactors(int iNumber)
{
    int iCount = 0 ;
    int iSum = 0;

    if(iNumber < 0)             // Updator
    {
        iNumber = -iNumber;
    }

    for( iCount = 1 ; iCount <= (iNumber / 2) ; iCount++)
    {
        if((iNumber % iCount) == 0 )
        {
            iSum = iSum + iCount;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter Number : \n");
    scanf("%d" , &iValue);

    iRet = SumFactors(iValue);

    printf("Addition of Factors : %d\n" , iRet);

    return 0;

}