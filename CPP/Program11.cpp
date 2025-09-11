/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program11.cpp                                                                  //
//  Description :   Used to take number and display the Count of one in the binary converion       //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          05/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount = iCount + (iNo % 2);
        iNo = iNo / 2;
    }
    return iCount;
}


int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Count of 1 : "<<iRet<<endl;

    return 0;
}