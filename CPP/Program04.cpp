///////////////////////////////////////////////////////////
//                                                       //
//  File name :     Program04.cpp                        //
//  Description :   Used to do find largest number       //
//  Author :        Pallavi Omprakash Malewar            //
//  Date :          05/09/2025                           //
//                                                       //
///////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int Largest(int iNo1 , int iNo2 , int iNo3)
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
    cout<<Largest(45, 23, 78)<<endl;

    return 0;
}
