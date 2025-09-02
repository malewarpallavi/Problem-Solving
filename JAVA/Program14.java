//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program14.java                                                      //
//  Description :   Used to Count Frequency of 5                                        //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Digits
{
    public int countFrequency(int iNo)
    {
        int iDigit = 0, iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 5)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }
        return iCount;
    }
}

class Program14
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        if(!sobj.hasNextInt())
        {
            System.out.println("Invalid Input!");
            return;
        }

        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.countFrequency(iValue);

        System.out.println("Frequency of 5 in "+ iValue + " : "+ iRet);

        sobj.close();
    }
}