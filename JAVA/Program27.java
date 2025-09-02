//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program27.java                                                      //
//  Description :   Used to Print Given Pattern                                         //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          25/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


// Input : 4    #
// Output : #   #   #   #

// Input : 5    &
// Output : &   &   &   &   &

// Input : 3    z
// Output : z   z   z


import java.util.*;

class Pattern
{
    public void Display(int iNo , char ch)
    {
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;     // Filter
        }

        for(iCount = 1 ; iCount <= iNo ; iCount++)       // O(N)
        {
            System.out.print(ch + "\t");
        }
        System.out.println("");
    }
}

class Program27
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.print("Enter Character : ");
        char cValue = sobj.next().charAt(0);

        System.out.println("Accepted Character is : "+ cValue)

        Pattern pobj = new Pattern();

        pobj.Display(iValue , cValue);

        sobj.close();

    }
}

// Time Complexity O(N)
// N is a Natural Number
// Where N >= 0 & N <= Infinity