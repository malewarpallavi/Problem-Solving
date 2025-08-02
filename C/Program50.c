//////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                      //
//  File name :     Program50.c                                                                         //
//  Description :   Program to accept n integers from user & Check the smallest number from it          //
//  Author :        Pallavi Omprakash Malewar                                                           //
//  Date :          27/06/2025                                                                          //
//                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] , int iSize)
{
    int iCount = 0 , iMin = 0 ;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return -1;
    }

    iMin = Arr[0];

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        if(iMin > Arr[iCount])
        {
            iMin = Arr[iCount];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0 , iLength = 0 , iRet = 0 ;
    int *iPtr = NULL ;

    printf("Enter the number of elements : ");
    scanf("%d" , &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    
    printf("Enter Elements : \n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        printf("\nEnter the number %d : " , iCount + 1);
        scanf("%d" , &iPtr[iCount]);
    }
    
    iRet = Minimum(iPtr , iLength);

    printf("Smallest Number is %d\n" , iRet);

    free(iPtr);

    return 0;
}