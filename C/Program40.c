////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program40.c                                                   //
//  Description :   Program to accept N integers from user & Display them         //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          27/06/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0 ;

    printf("Entered elements are :\n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n" , Arr[iCnt]);
    }

}

int main()
{
    int iLength = 0 , iCnt = 0 ;
    int *ptr = NULL;

    printf("Enter the number of Elements :\n");
    scanf("%d" , &iLength);

    // Step 1 : Allocate the Memory

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements :\n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    // Step 2 : Use that memory
    Display(ptr , iLength);

    // Step 3 : Free the Memory
    free(ptr);

    return 0;
    
}