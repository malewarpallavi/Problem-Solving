////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program41.c                                                   //
//  Description :   Program to accept N integers from user & return Sum           //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          27/06/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[] , int iSize)
{
    int iCount = 0 , iSum = 0 ;

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        iSum = iSum + Arr[iCount];
    }
    return iSum;
}


int main()
{
    int iLength = 0 , iCount = 0 , iRet = 0 ;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d" , &iLength);

    // Step 1 : Allocate the Memory

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }    

    printf("Enter the elements : \n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        scanf("%d" , &ptr[iCount]);
    }

    // Step 2 : Use the Memory
    iRet = Summation(ptr , iLength);

    printf("Summation of all elements : %d" , iRet);

    // Step3 : Free the Memory
    free(ptr);

    return 0;
}