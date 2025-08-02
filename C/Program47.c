//////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                      //
//  File name :     Program47.c                                                                         //
//  Description :   Program to accept n integers and number from user & Check if it is present or not   //
//  Author :        Pallavi Omprakash Malewar                                                           //
//  Date :          27/06/2025                                                                          //
//                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// Using Flag


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] , int iSize , int iNo)
{
    int iCount = 0 ;
    bool bFlag = false;

    if((Arr = NULL) || (iSize < 0))
    {
        return  false;
    }

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            break;
            bFlag = true;
        }
    }
    return bFlag;
    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0 , iValue = 0 , iCnt = 0 ;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d" , &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to Allocate memory.\n");
        return -1;
    }

    printf("Enter the Elements : \n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        printf("Enter the number %d : " , iCnt+1);

        scanf("%d" , &iPtr[iCnt]);
    }

    printf("\nEnter the number you want to search : \n");
    scanf("%d" , &iValue);

    bRet = Search(iPtr , iLength , iValue);

    if(bRet == true)
    {
        printf("%d is present in the Array\n" , iValue);
    }
    else
    {
        printf("%d is not present in the Array\n" , iValue);
    }

    free(iPtr);

    return 0;
}