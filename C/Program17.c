/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program17.c                                        //
//  Description :   Used to Display Factors of given number            //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          19/07/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactors(int iNumber)
{
    int iCount = 0 ;

    if(iNumber < 0)             // Updator
    {
        iNumber = -iNumber;
    }

    for( iCount = 1 ; iCount <= (iNumber / 2) ; iCount++)
    {
        if(((iNumber % iCount) == 0 ) && ((iCount % 2) == 0))
        {
            printf("%d\n" , iCount);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d" , &iValue);

    DisplayEvenFactors(iValue);

    return 0;

}

// Time Complexity : O(N/2)