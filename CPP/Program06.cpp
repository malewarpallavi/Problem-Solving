///////////////////////////////////////////////////////////
//                                                       //
//  File name :     Program06.cpp                        //
//  Description :   Used to take and display Array       //
//  Author :        Pallavi Omprakash Malewar            //
//  Date :          05/09/2025                           //
//                                                       //
///////////////////////////////////////////////////////////

// Generic Program

#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[] , int iLength)
{
    int iCnt = 0;

    cout<<"Elements of the Array :\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }
}

int main()
{
    int Size, iCnt = 0;

    cout<<"Enter the Number of Elements : ";
    cin>>Size;

    int * ptr = new int[Size];
    cout<<"Enter the Elements :\n";

    for(iCnt = 0; iCnt < Size ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr , Size);

    delete []ptr;

    return 0;
}