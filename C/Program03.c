//////////////////////////////////////////////////////////
//                                                      //
//  File name :     Program3.c                          //
//  Description :   Used to Calculate Ticket            //
//  Author :        Pallavi Omprakash Malewar           //
//  Date :          28/04/2025                          //
//                                                      //
//////////////////////////////////////////////////////////

/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/


#include<stdio.h>

# define ERR_INVALID_AGE -1

int CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        iPrice = 0;
    }
    else if((iAge > 5) && (iAge <= 18))
    {
        iPrice = 700;
    }
    else if((iAge > 18) && (iAge <= 50))
    {
        iPrice = 999;
    }
    else if((iAge > 50))
    {
        iPrice = 500;
    }
    return iPrice;

}

int main()
{
    
    int iValue = 0 , iRet = 0;

    printf("Please Enter Your Age : ");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("Unable to Calculate the Ticket Price as age is Invalid.\n");
    }
    else
    {
        printf("Your Ticket Price is : %d\n",iRet);
    }

    return 0;
}