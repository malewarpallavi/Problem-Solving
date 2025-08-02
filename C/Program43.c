//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
//  File name :     Program43.c                                                                     //
//  Description :   Program to accept n integers from user & return Count of Even Number            //
//  Author :        Pallavi Omprakash Malewar                                                       //
//  Date :          27/06/2025                                                                      //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[] , int iSize)
{
    int i = 0 , iCount = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int iLength = 0 , iCount = 0 , iRet = 0 ;
    int *ptr = NULL ;

    printf("Enter Number of Elements : ");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength * (sizeof(int)));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        scanf("%d" , &ptr[iCount]);
    }

    iRet = CountOdd(ptr , iLength);

    printf("Total Odd Numbers Entered : %d" , iRet);

    free(ptr);

}