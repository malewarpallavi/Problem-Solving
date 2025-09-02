////////////////////////////////////////////////////////////////////
//                                                                //
//  File name :     Program03.java                                //
//  Description :   Used to check if given number is Even or not  //
//  Author :        Pallavi Omprakash Malewar                     //
//  Date :          24/08/2025                                    //
//                                                                //
////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public boolean CheckEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program03
{
    public static void main(String A[])
    {
        boolean bRet = false;
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number you want to check Even/Odd : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckEvenOdd(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is Even.");
        }
        else
        {
            System.out.println(iValue + " is Odd.");
        }

    }
}