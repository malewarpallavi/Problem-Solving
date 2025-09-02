//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program15.java                                                      //
//  Description :   Used to Display Even Number from given Number                       //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public void displayEven(int iNo)
    {
        int iDigit = 0, iCount = 0;
        boolean hasEven = false;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        if(iNo == 0)
        {
            System.out.println("0");
            hasEven = true;
            return;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iCount++;
                System.out.print(iDigit + "\t");
                hasEven = true;
            }

            iNo = iNo / 10;
        }

        if(!hasEven)
        {
            System.out.pritnln("Even Digits are Not Found");
        }

    }
}

class Program15
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter Number : ");

        if(!sobj.hasNextInt())
        {
            System.out.println("Invalid Input.");
            return;

        }

        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        dobj.displayEven(iValue);
    }
}