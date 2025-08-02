/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program11.c                                        //
//  Description :   Used to Display Factorial of given number          //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          28/04/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
    int iCount = 0;

    unsigned long iFactorial = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }
    
    iCount = 1 ;
    while(iCount <= iNo)
    {
        iFactorial = iFactorial * iCount;
        iCount++;
    }

    return iFactorial;

}


int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter Number : ");
    scanf("%u" , &iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input\n");
    }

    else
    {
        printf("Factorial is : %lu\n" , iRet);
    }

    return 0;
}
