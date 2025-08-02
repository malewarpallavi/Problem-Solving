//////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                      //
//  File name :     Program48.c                                                                         //
//  Description :   Program to accept n integers and number from user & Check it's frequency            //
//  Author :        Pallavi Omprakash Malewar                                                           //
//  Date :          27/06/2025                                                                          //
//                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iSize , int iNo)
{
    int i = 0 , iCount = 0 ;

    if((Arr == NULL) || (iSize < 0))
    {
        return -1;
    }
    
    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int iLength = 0 , iCount = 0 , iNum = 0 , iRet = 0 ;
    int *iPtr = NULL;

    printf("Enter number of elements : ");
    scanf("%d" , &iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    printf("Enter the Elements :\n");

    for(iCount = 0 ; iCount < iLength ; iCount++)
    {
        printf("\nEnter the number %d : ", iCount + 1);
        scanf("%d" , &iPtr[iCount]);
    }

    printf("Enter the number to gets it's frequency : ");
    scanf("%d" , &iNum);

    iRet = Frequency(iPtr , iLength , iNum);

    if(iRet == -1)
    {
        printf("There is a issue in the input.\n");
    }
    else
    {
        printf("frequency of %d in array is %d.\n" , iNum , iRet);
    }

    return 0;

}