/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program41.cpp                                                                  //
//  Description :   Used to find largest element in the Array                                      //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////

// Generic Program


#include<iostream>
using namespace std;

template <class T>

T Largest(T Arr[] ,int iSize)
{
    T iMax = 0;
    int iCnt = 0;

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
    float *ptr = NULL;
    int iLength = 0 , iCnt = 0 ;
    float fRet = 0.0f;

    cout<<"Enter the Number of Elements : ";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the Elements :\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    fRet = Largest(ptr , iLength);

    cout<<"Largest Elemenyts in the Array is : "<<fRet<<endl;

    delete []ptr;

    return 0;
}