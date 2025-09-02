///////////////////////////////////////////////////////////////////////////
//                                                                       //
//  File name :     Program06.java                                       //
//  Description :   Used to Display Sum of Factors of Given Number       //
//  Author :        Pallavi Omprakash Malewar                            //
//  Date :          24/08/2025                                           //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public int sumOfFactors(int iNo)
    {
        int iCount = 0 , iSum = 0;

        for(iCount = 1 ; iCount <= (iNo / 2) ; iCount++)
        {
            if((iNo % iCount) == 0)
            {
                iSum += iCount;
            }
        }
        iSum += iNo;        // To add that Number itself

        return iSum;
    }
}

class Program06
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.sumOfFactors(iValue);

        System.out.println("Sum of Factors of "  + iValue + " is " + iRet);

        sobj.close();
    }
}