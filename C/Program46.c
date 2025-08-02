//////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                      //
//  File name :     Program46.c                                                                         //
//  Description :   Program to accept n integers and number from user & Check if it is present or not   //
//  Author :        Pallavi Omprakash Malewar                                                           //
//  Date :          27/06/2025                                                                          //
//                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] , int iSize , int iNo)
{
    int iCount = 0 ;

    if((Arr == NULL) || (iSize < 0))
    {
        return false;
    }
    
    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            break;
        }
    }

    if(iCount == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int iLength = 0 , iCount = 0 , iNum = 0 ;
    int *iPtr = NULL;
    bool bRet = false;

    printf("Enter Number of Elements : ");
    scanf("%d" , &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements :\n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        scanf("%d" , &iPtr[iCount]);
    }

    printf("Enter the number you want to search : ");
    scanf("%d" , &iNum);

    bRet = Search(iPtr , iLength , iNum);

    if(bRet == false)
    {
        printf("%d is not present.\n" , iNum);
    }
    else
    {
        printf("%d is present.\n" , iNum);
    }

    free(iPtr);

    return 0;

}