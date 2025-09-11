/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program32.cpp                                                                  //
//  Description :   Used to to check bit at sepcific position is ON or OFF                         //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)                // 12
{
    UINT iMask = 0xfffff7ff;          
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}


int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated Number is : "<<iRet<<endl;
    return 0;
}