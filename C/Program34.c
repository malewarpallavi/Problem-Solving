//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  File name :     Program34.c                                         //
//  Description :   Problem on Pattern Printing                         //
//  Author :        Pallavi Omprakash Malewar                           //
//  Date :          27/06/2025                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


// Input : 4    4
/*
    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4
*/

#include<stdio.h>

void Display(int iRow , int iColumn)
{
    int i = 0 , j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iColumn ; j++)
        {
            printf("%d\t" , j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d" , &iValue1);

    printf("Enter Number of Columns : ");
    scanf("%d" , &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}