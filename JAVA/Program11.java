//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program11.java                                                      //
//  Description :   Used to Display Sum of Factors and NonFactors of Given Number       //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public void sum(int iNo)
    {
        int iCount = 0, iSumFact = 0, iSumNonFact = 0;

        for(iCount = 1 ; iCount <= iNo ; iCount++)
        {
            if((iNo % iCount) == 0)
            {
                iSumFact += iCount;
            }
            else
            {
                iSumNonFact += iCount;
            }

        }
        System.out.println("Summation of Factors : " + iSumFact);
        System.out.println("Summation of Non-Factors : " + iSumNonFact);

    }
}

class Program11
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.sum(iValue);


        sobj.close();
    }
}