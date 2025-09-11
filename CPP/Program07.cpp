//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//  File name :     Program07.cpp                                           //
//  Description :   Used to take number and display binary conversion       //
//  Author :        Pallavi Omprakash Malewar                               //
//  Date :          05/09/2025                                              //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int Arr[32];
    int iCnt = 0, j = 0;

    if(iNo == 0)
    {
        cout<<"Binary Conversion is : 0"<<endl;
        return;
    }
    
    while(iNo > 0)
    {
        Arr[iCnt] = iNo % 2;
        iNo = iNo / 2;
        iCnt++;
    }

    cout<<"Binary Conversion is : ";

    for(j = iCnt -1 ; j >= 0 ; j--)
    {
        cout<<Arr[j];
    }
    cout<<endl;
}


int main()
{
    int iValue = 0;

    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}