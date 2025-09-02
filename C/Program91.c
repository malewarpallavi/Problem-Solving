/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
// File name    : Program91.c                                                                      //
// Description  : Accept and Display Elements of an Integer Array                                  //
// Author       : Pallavi Omprakash Malewar                                                        //
// Date         : 01/09/2025                                                                       //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < 5 ; iCnt++)
    {
        scanf("%d", &Arr[iCnt ]);
    }

    printf("Elements From the Array are :\n");

    for(iCnt = 0; iCnt < 5 ; iCnt++)
    {
        printf("%d\n", Arr[iCnt ]);
    }
    
    return 0;
}