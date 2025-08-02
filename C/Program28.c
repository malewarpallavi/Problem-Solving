//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  File name :     Program28.c                                         //
//  Description :   Problem on Pattern Printing                         //
//  Author :        Pallavi Omprakash Malewar                           //
//  Date :          27/06/2025                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


// Input : 5
// Output : -5  -4  -3  -2  -1  0


#include<stdio.h>

void Display(int iNumber)
{
    int iCount = 0;

    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCount = -iNumber ; iCount <= 0 ; iCount++)
    {
        printf("%d\t" , iCount);
    }

    printf("\n");
    
}


int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}


// Time Complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Inifinity