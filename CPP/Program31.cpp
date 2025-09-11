/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program31.cpp                                                                  //
//  Description :   Used to to check bit at sepcific position is ON or OFF                         //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)       
{
    UINT iMask = 0x00000008;          // 4
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"4th bit is ON\n";
    }
    else
    {
        cout<<"4th bit is OFF\n";
    }

    return 0;
}