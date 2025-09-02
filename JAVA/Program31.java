//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program31.java                                                      //
//  Description :   Used to Print Given Pattern                                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



// Input : 4    4
// Output :
/*
    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4
*/
            


import java.util.Scanner;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0, j= 0;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j<= iCol ; j++)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
    }
}

class Program31
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