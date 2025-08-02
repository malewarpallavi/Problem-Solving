/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program9.c                                         //
//  Description :   Used to find summation of natural numbers upto N   //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          28/04/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Summation(int iNumber)
{
    int iCount = 0;
    int iSum = 0;

    for(iCount = 1 ; iCount <= iNumber ; iCount++)
    {
        iSum = iSum + iCount;
    }

    return iSum;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n" , iRet);

    return 0;
}
