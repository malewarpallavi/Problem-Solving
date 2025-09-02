//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program55.java                                                      //
//  Description :   Used to Calculate Ticket                                            //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          27/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/


import java.util.Scanner;

class Ticket
{
    int iAge = 0, iPrice = 0;

    Ticket(int iAge)
    {
        this.iAge = iAge;
    }

    public int CalculateTicket(int iAge)
    {
        if((iAge < 0))
        {
            return -1;
        }

        if((this.iAge >= 0) || (this.iAge <= 5))
        {
            iPrice = 0;
        }
        else if((this.iAge > 5) && (this.iAge <= 18))
        {
            iPrice = 700;
        }
        else if((iAge > 18) && (iAge <= 50))
        {
            iPrice = 999;
        }
        else if((iAge > 50))
        {
            iPrice = 500;
        }
        return iPrice;
        
    }
}

class Program55
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iAge = 0, iRet = 0;

        System.out.println("Enter Your Age : ");
        iAge = sobj.nextInt();

        Ticket tobj = new Ticket(iAge);

        iRet = tobj.CalculateTicket(iAge);

        if(iRet == -1)
        {
            System.out.println("Unable to Calculate the Ticket Price as Age is Invalid.");
        }
        else
        {
            System.out.println("Your Ticket Price is : " + iRet);
        }
    }
}