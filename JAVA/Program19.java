//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program19.java                                                      //
//  Description :   Used to Print Given Pattern                                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


// Input : 4
// Output : *   *   *   *

/*
    Start
        Accept the frequency
        Iterate from 1 to that frequency
            Display * on screen
        continue
    Stop
*/


import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        for(iCount = 1 ; iCount <= iNo ; iCount++)
        {
            System.out.print("*\t");
        }
        System.out.println("\n");
    }
}

class Program19
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);

    }
}

// Time Complexity O(N)
// N is a Natural Number
// Where N >= 0 & N <= Infinity