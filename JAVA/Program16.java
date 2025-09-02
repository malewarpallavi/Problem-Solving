//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program16.java                                                      //
//  Description :   Used to Count Digits in Given Number                                //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Digits
{
    public int countDigits(int iNo)
    {
        int iCount = 0;

        iNo = Math.abs(iNo);        // Inbuilt method for Filter(To handle negative Numbers)

        if(iNo == 0)
        {
            return 1;
        }

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        return iCount;
    }
}

class Program16
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.countDigits(iValue);

        System.out.println("Total Digits in "+ iValue + " : " + iRet);

        sobj.close(); 
    }
}