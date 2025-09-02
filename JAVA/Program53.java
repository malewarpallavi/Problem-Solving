//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program53.java                                                      //
//  Description :   Used to Calculate Percentage                                        //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          27/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class Calculate
{
    int iTotalMarks = 0, iObtainedMarks = 0;

    Calculate(int iTotalMarks, int iObtainedMarks)
    {
        this.iTotalMarks = iTotalMarks;
        this.iObtainedMarks = iObtainedMarks;
    }

    public float CalculatePercentage(int iTotalMarks , int iObtainedMarks)
    {
        float fPercentageValue = 0.0f;

        fPercentageValue = ((float)this.iObtainedMarks / (float)this.iTotalMarks) * 100;

        return fPercentageValue;
    }
}

class Program53
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iTotal = 0, iObtained = 0;
        float fRet = 0.0f;

        System.out.print("Enter Total Marks : ");
        iTotal = sobj.nextInt();

        System.out.print("Enter Obtained Marks : ");
        iObtained = sobj.nextInt();

        if(iTotal <= 0)
        {
            System.out.println("Invalid Input!\nPlease Enter Valid Input.");
        }

        if(iObtained > iTotal)
        {
            System.out.println("Please Enter Valid Input!\nObtained marks cannot be negative or greater than total marks.");
        }

        Calculate cobj = new Calculate(iTotal, iObtained);

        fRet = cobj.CalculatePercentage(iTotal, iObtained);

        System.out.println("Percetage is : " + fRet);

        sobj.close();
    }
}

