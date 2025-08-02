//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  File name :     Program30.c                                         //
//  Description :   Problem on Pattern Printing                         //
//  Author :        Pallavi Omprakash Malewar                           //
//  Date :          27/06/2025                                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////



// Input : 4    #
// Output : #   #   #   #

// Input : 5    &
// Output : &   &   &   &

// Input : 3    z
// Output : z   z   z   z


#include<stdio.h>

void Display(int iNumber , char ch)
{
    int iCount = 0;

    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCount = 1 ; iCount <= iNumber ; iCount++)     // N
    {
        printf("%c\t" , iNumber);
    }

    printf("\n");
    
}


int main()
{
    int iValue = 0;
    char cValue = '\0';
    
    printf("Enter Number : ");
    scanf("%d" , &iValue);

    printf("Enter Character : ");
    scanf("%c" , &cValue);

    printf("Accepted Character is : %c\n" , cValue);

    Display(iValue , cValue);

    return 0;
}


// Time Complexity O(N)
// N is a natural number
// Where N >= 0 and N <= Inifinity