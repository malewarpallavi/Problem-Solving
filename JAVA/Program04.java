////////////////////////////////////////////////////////////////////
//                                                                //
//  File name :     Program04.java                                //
//  Description :   Used to Display Factors of Given Number       //
//  Author :        Pallavi Omprakash Malewar                     //
//  Date :          24/08/2025                                    //
//                                                                //
////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Number
{
    public void displayFactors(int iNo)
    {
        int iCount = 0;

        for(iCount = 1 ; iCount <= (iNo / 2) ; iCount++)
        {
            if((iNo % iCount) == 0)
            {
                System.out.print(iCount + "\t");
            }
        }
        System.out.println(iNo);        // To Print the number itself as it is a factor

    }
}

class Program04
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter the Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.displayFactors(iValue);

        sobj.close();
    }
}