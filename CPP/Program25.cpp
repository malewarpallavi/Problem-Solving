/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program25.cpp                                                                  //
//  Description :   Used to Turn off the 3rd and 6th bits of a given number.                       //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)       
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iMask1 & iNo;
    iResult = iResult & iMask2;

    return iResult;
}


int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OffBitMultiple(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}