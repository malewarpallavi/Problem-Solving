///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program09.java                                           //
//  Description :   Used to Display Sum of Non-Factors of Given Number       //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          24/08/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public int sumOfNonFactors(int iNo)
    {
        int iSum = 0;

        for(int iCount = 1 ; iCount <= iNo ; iCount++)
        {
            if((iNo % iCount) != 0)
            {
                iSum += iCount;
            }
        }
        return iSum;
    }
}

class Program09
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.sumOfNonFactors(iValue);

        System.out.println("Sum of Non Factors of "  + iValue + " is " + iRet);

        sobj.close();
    }
}