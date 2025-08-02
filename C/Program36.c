////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program36.c                                                   //
//  Description :   Program to accept 5 intgers from user & display on screen     //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          27/06/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int iCount = 0 ;
    int Arr[5] ;

    printf("Enter the Elements :\n");

    for(iCount = 0 ; iCount < 5 ; iCount++)
    {
        scanf("%d" , &Arr[iCount]);
    }

    printf("Elements from the array are : \n");

    for(iCount = 0 ; iCount < 5 ; iCount++)
    {
        printf("%d\n" , Arr[iCount]);
    }

    return 0;
}