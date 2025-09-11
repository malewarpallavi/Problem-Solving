/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program29.cpp                                                                  //
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
    UINT iMask = 0x04000000;          // 27
    UINT iResult = 0;

    bool bFlag = false;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }

    return bFlag;
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
        cout<<"27th bit is ON\n";
    }
    else
    {
        cout<<"27th bit is OFF\n";
    }

    return 0;
}