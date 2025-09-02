//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program18.java                                                      //
//  Description :   Used to Reverse the given Number                                    //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Digits
{
    public int Reverse(int iNo)
    {
        int iDigit = 0, iRev = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iRev = iRev * 10 + iDigit;

            iNo = iNo / 10;  
        }

        return iRev;
        
    }
}

class Program18
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.Reverse(iValue);

        System.out.println("Reversed Number : " + iRet);

    }
}