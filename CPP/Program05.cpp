///////////////////////////////////////////////////////////
//                                                       //
//  File name :     Program05.cpp                        //
//  Description :   Used to do find largest number       //
//  Author :        Pallavi Omprakash Malewar            //
//  Date :          05/09/2025                           //
//                                                       //
///////////////////////////////////////////////////////////

// Generic Program

#include<iostream>
using namespace std;

template <class T>

T Largest(T iNo1 , T iNo2 , T iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo3) && (iNo2 > iNo1))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    cout<<Largest(14, 18, 11)<<endl;
    cout<<Largest(21, 23, 78)<<endl;
    cout<<Largest(45.32, 23.98, 78.34)<<endl;

    return 0;
}
