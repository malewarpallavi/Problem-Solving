////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  File name :     Program05.java                                                //
//  Description :   Used to Display Total Count of Factors of Given Number        //
//  Author :        Pallavi Omprakash Malewar                                     //
//  Date :          24/08/2025                                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public int totalFactors(int iNo)
    {
        int iCount = 0, iCnt = 0;

        for(iCount = 1 ; iCount <= (iNo / 2) ; iCount++)
        {
            if((iNo % iCount) == 0)
            {
                iCnt++;
            }
        }
        iCnt++;             // To Add Count of Given Number itself
        return iCnt;
    }
}


class Program05
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0 , iRet = 0 ;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.totalFactors(iValue);

        System.out.println("Total Number of Factors of " + iValue + " is "+ iRet);

        sobj.close();

    }
}