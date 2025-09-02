//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  File name :     Program54.java                                                      //
//  Description :   Used to Display Class of Result                                     //
//  Author :        Pallavi Omprakash Malewar                                           //
//  Date :          27/08/2025                                                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
    Start
        Accept percentage from user
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is greater than 0 and less than 35
                Display as fail
            If percentage is greater than 35 and less than 50
                Display as Pass class
            If percentage is greater than 50 and less than 60
                Display as second class
            If percentage is greater than 60 and less than 70
                Display as first class
            If percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/

import java.util.Scanner;

class CheckClass
{
    float fPercentage = 0.0f;

    CheckClass(float fPercentage)
    {
        this.fPercentage = fPercentage;
    }

    public void DisplayClass(float fPercentage)
    {
        if((fPercentage < 0.0f) || (fPercentage > 100.0f))
        {
            System.out.println("Invalid Input!\nPlease Enter Valid Percentage");
        }

        if((fPercentage >= 0.0f) && (fPercentage < 35.0f))
        {
            System.out.println("You are Failed");
        }
        else if((fPercentage >= 35.0f) && (fPercentage < 50.0f))
        {
            System.out.println("Pass Class.");
        }
        else if((fPercentage >= 50.0f) && (fPercentage < 60.0f))
        {
            System.out.println("Second Class.");
        }
        else if((fPercentage >= 60.0f) && (fPercentage < 70.0f))
        {
            System.out.println("First Class.");
        }
        else if((fPercentage >= 70.0f) && (fPercentage <= 100.0f))
        {
            System.out.println("First Class with Distinction.");
        }
    }
}

class Program54
{
    public static void main(String A[])
    {        
        Scanner sobj = new Scanner(System.in);

        float fPercentageValue = 0.0f;

        System.out.println("Enter Percentage : ");
        fPercentageValue = sobj.nextFloat();

        CheckClass cobj = new CheckClass(fPercentageValue);

        cobj.DisplayClass(fPercentageValue);
    }
}