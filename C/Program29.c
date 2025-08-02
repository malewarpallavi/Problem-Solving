//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  File name :     Program29.c                                         //
//  Description :   Problem on Pattern Printing                         //
//  Author :        Pallavi Omprakash Malewar                           //
//  Date :          27/06/2025                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////



// Input : 5
// Output : -5  -4  -3  -2  -1  0   1   2   3   4   5


#include<stdio.h>

void Display(int iNumber)
{
    int iCount = 0;

    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCount = -iNumber ; iCount <= iNumber ; iCount++)     // 2N
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


// Time Complexity O(2N)
// N is a natural number
// Where N >= 0 and N <= Inifinity