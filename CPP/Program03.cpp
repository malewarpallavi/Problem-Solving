///////////////////////////////////////////////////////////
//                                                       //
//  File name :     Program03.cpp                        //
//  Description :   Used to do Addition of two numbers   //
//  Author :        Pallavi Omprakash Malewar            //
//  Date :          05/09/2025                           //
//                                                       //
///////////////////////////////////////////////////////////

// Generic Program

#include<iostream>
using namespace std;

template<class T>

T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10, 11)<<"\n";
    cout<<Addition(10.90f, 11.70f)<<"\n";
    cout<<Addition(10.23, 11.23)<<"\n";

    return 0;
}