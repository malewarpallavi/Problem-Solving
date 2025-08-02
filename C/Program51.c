////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                //
//  File name :     Program51.c                                                                                   //
//  Description :   Program to accept n integers from user & Check the largest & smallest number from it          //
//  Author :        Pallavi Omprakash Malewar                                                                     //
//  Date :          27/06/2025                                                                                    //
//                                                                                                                //  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[] , int iSize)
{
    int iCount = 0 , iMax = 0 , iMin = 0 ;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return;
    }

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        if(iMax < Arr[iCount])
        {
            iMax = Arr[iCount];
        }
        if(iMin > Arr[iCount])
        {
            iMin = Arr[iCount];
        }
    }

    printf("Largest Element is : %d\n" , iMax);
    printf("Smallest Element is : %d\n" , iMin);

}

int main()
{
    int iCount = 0 , iLength = 0 ;
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
    
    MaximumMinimum(iPtr , iLength);

    free(iPtr);

    return 0;
}