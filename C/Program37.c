////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program37.c                                                   //
//  Description :   Program to accept 5 intgers from user & display on screen     //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          27/06/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int *ptr , int iSize)
{
    int iCount = 0 ;

    printf("Elements of the array are : \n");

    for(iCount = 0 ; iCount <= iSize ; iCount++)
    {
        printf("%d\n" , *ptr);
        ptr++;
    }
}


int main()
{
    int Arr[5];
    int iCount = 0;

    printf("Enter the Elements : \n");

    for(iCount = 0 ; iCount < 5 ; iCount++)
    {
        scanf("%d" , &Arr[iCount]);
    }

    Display(Arr , 5);   

    return 0;
}