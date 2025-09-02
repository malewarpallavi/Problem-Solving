//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program44.java                                                      //
//  Description :   Used to Print Given Pattern                                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          26/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


// Input : 4    4
// Output :
/*
    o   *   *   *
    *   o   *   *
    *   *   o   *
    *   *   *   o
*/
            

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0, j = 0;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                if(i == j)
                {
                    System.out.print("o\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class Program44
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.print("Enter Number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}