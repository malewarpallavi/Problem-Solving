/////////////////////////////////////////////////////////////////////////
//                                                                     //
//  File name :     Program16.c                                        //
//  Description :   Used to Display Factors of given number            //
//  Author :        Pallavi Omprakash Malewar                          //
//  Date :          19/07/2025                                         //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     // Updator 
    }
    for(iCount = 1 ; iCount <= (iNo / 2) ; iCount++)
    {
        if((iNo % iCount) == 0)
        {
            printf("Factor is : %d\n" , iCount);
        }
        else
        {
            printf("Non Factor is : %d\n" , iCount);
        }
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number to display factors & non factors : ");
    scanf("%d" , &iValue);

    DisplayFactorsNonFactors(iValue);
    
    return 0;
}

// Time Complexity O(N/2)