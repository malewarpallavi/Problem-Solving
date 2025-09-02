//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program17.java                                                      //
//  Description :   Used to Count Even Number from given Number                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Digits
{
    public int countEven(int iNo)
    {
        int iDigit = 0, iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }
        return iCount;
    }
}

class Program17
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.countEven(iValue);

        System.out.println("Count of Even Digits in " + iValue + " : " + iRet);

    }
}