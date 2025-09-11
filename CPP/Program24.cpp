/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program24.cpp                                                                  //
//  Description :   Used to Change the Nth bit of given number                                     //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          05/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)       
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter the Position : ";
    cin>>iLocation;

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}