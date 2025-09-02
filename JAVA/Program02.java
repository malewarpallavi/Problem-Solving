////////////////////////////////////////////////////////////
//                                                        //
//  File name :     Program02.java                        //
//  Description :   Used to print addition of 2 numbers   //
//  Author :        Pallavi Omprakash Malewar             //
//  Date :          24/08/2025                            //
//                                                        //
////////////////////////////////////////////////////////////

import java.util.*;

class Arithmetic
{
    public int iNo1;
    public int iNo2;

    public Arithmetic(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int addition()
    {
        int iAns = 0;
        iAns = this.iNo1 + this.iNo2;

        return iAns;
    }
}

class Program02
{
    public static void main(String A[])
    {
        int iValue1 = 0 , iValue2 = 0 , iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2 = sobj.nextInt();

        Arithmetic aobj = new Arithmetic(iValue1 , iValue2);

        iRet = aobj.addition();

        System.out.println("Addition of " + iValue1 + " & " + iValue2 + " is " + iRet);

        sobj.close();
    }
}