/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program39.cpp                                                                  //
//  Description :   Used to find largest element in the Array                                      //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int Largest(int Arr[] ,int iSize)
{
    int iMax = 0, iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0 , iCnt = 0 , iRet = 0;

    cout<<"Enter the Number of Elements : ";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the Elements :\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    iRet = Largest(ptr , iLength);

    cout<<"Largest Elemenyts in the Array is : "<<iRet<<endl;

    delete []ptr;

    return 0;
}