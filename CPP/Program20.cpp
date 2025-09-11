/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program20.cpp                                                                  //
//  Description :   Used to Check whether the specific bit of a given number is ON or OFF.         //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          05/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    if((iPos <= 0) || (iPos > 32))
    {
        cout<<"Invalid bit Position\n";         // Filter
        return false;
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the Position :\n";
    cin>>iLocation;

    bRet = CheckBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON at location "<<iLocation<<endl;
    }
    else
    {
        cout<<"Bit is OFF at location "<<iLocation<<endl;
    }

    return 0;
}