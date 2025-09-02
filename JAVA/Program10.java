///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  File name :     Program10.java                                           //
//  Description :   Used to Check if given Number is Perfect Number or not   //
//  Author :        Pallavi Omprakash Malewar                                //
//  Date :          24/08/2025                                               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Number
{
    public boolean checkPerfect(int iNo)
    {
        int iCount = 0, iSum = 0;
        boolean bRet = false;

        for(iCount = 1 ; iCount <= (iNo /2) ; iCount++)
        {
            if((iNo % iCount) == 0)
            {
                iSum = iSum + iCount;
            }
        }
        
        if(iSum == iNo)
        {
            bRet = true;
        }
        else
        {
            bRet = false;
        }
        return bRet;
    }
}

class Program10
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        boolean bRet = false;
        int iValue = 0;

        System.out.print("Enter the Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.checkPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is a Perfect Number.");
        }
        else
        {
            System.out.println(iValue + " is not a Perfect Number.");
        }

    }
}