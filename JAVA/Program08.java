////////////////////////////////////////////////////////////////////////////////////////     
//                                                                                    //
//  File name :     Program08.java                                                    //
//  Description :   Used to Display Total Count of Non-Factors of Given Number        //
//  Author :        Pallavi Omprakash Malewar                                         //
//  Date :          24/08/2025                                                        //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Number
{
    public int totalNonFactors(int iNo)
    {
        int iCount = 0, iCnt = 0;

        for(iCount = 1 ; iCount <= iNo ; iCount++)
        {
            if((iNo % iCount) != 0)
            {
                iCnt++;         // To Count Non Factors
            }
        }
        return iCnt;
    }
}


class Program08
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0 ;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();

        iRet = nobj.totalNonFactors(iValue);

        System.out.println("Total Count of Non-Factors of " + iValue + " is "+ iRet);

        sobj.close();

    }
}