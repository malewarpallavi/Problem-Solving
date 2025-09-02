//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program26.java                                                      //
//  Description :   Used to Print Given Pattern                                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


// Input : 4
// Output : -4  -3  -2  -1  0   1   2   3   4



import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        for(iCount = -iNo ; iCount <= iNo ; iCount++)       // O(2N)
        {
            System.out.print(iCount + "\t");
        }
        System.out.println("");
    }
}

class Program26
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue);

    }
}

// Time Complexity O(N)
// N is a Natural Number
// Where N >= 0 & N <= Infinity