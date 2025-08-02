////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program39.c                                                   //
//  Description :   Program to accept 5 integers from user & return it's sum      //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          27/06/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Summation(int ptr[] , int iSize)
{
    int iCount = 0 , iSum = 0; 

    for(iCount = 0 ; iCount < iSize ; iCount++)
    {
        iSum = iSum + ptr[iCount];
    }
    
    return iSum;
}


int main()
{
    
    int Arr[5];
    int iCount = 0 , iRet = 0;

    printf("Enter the Elements : \n");

    for(iCount = 0 ; iCount < 5 ; iCount++)
    {
        scanf("%d" , &Arr[iCount]);
    }

    iRet = Summation(Arr , 5);

    printf("Addition is : %d\n" , iRet);

    return 0;

}