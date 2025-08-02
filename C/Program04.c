//////////////////////////////////////////////////////////
//                                                      //
//  File name :     Program4.c                          //
//  Description :   Used to print N natural number      //
//  Author :        Pallavi Omprakash Malewar           //
//  Date :          28/04/2025                          //
//                                                      //
//////////////////////////////////////////////////////////

#include<stdio.h>

// Iteration 

void Display(int iNumber)
{
    int iCount = 0;

    for(iCount = 1 ; iCount <= iNumber ; iCount++)
    {
        printf("%d\n" , iCount);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the Value : ");

    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}