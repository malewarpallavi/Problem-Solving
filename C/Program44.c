//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
//  File name :     Program44.c                                                                     //
//  Description :   Program to accept n integers from user & return Count of Even Number            //
//  Author :        Pallavi Omprakash Malewar                                                       //
//  Date :          27/06/2025                                                                      //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[] , int iSize)
{
    int iCount = 0 , iSum = 0 ;

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        if((Arr[iCount] % 2) == 0)
        {
            iSum = iSum + Arr[iCount];
        }
    }
    return iSum;
}


int main()
{
    int iLength = 0 , iCount = 0 , iRet = 0 ;
    int *ptr = NULL;    

    printf("Enter Number of Elements : ");
    scanf("%d" , &iLength);

    ptr = (int *)malloc(iLength * (sizeof(int)));

    if(ptr == NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }

    printf("Enter the Elements :\n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        scanf("%d" , &ptr[iCount]);
    }

    iRet = SumEven(ptr , iLength);

    printf("Summation of Even Numbers : %d" , iRet);

    free(ptr);
}