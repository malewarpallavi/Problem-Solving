///////////////////////////////////////////////////////////
//                                                       //
//  File name :     Program02.cpp                        //
//  Description :   Used to do Addition of two numbers   //
//  Author :        Pallavi Omprakash Malewar            //
//  Date :          05/09/2025                           //
//                                                       //
///////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Ret, Value1, Value2;

    cout<<"Enter first number : \n";
    cin>>Value1;

    cout<<"Enter second number : \n";
    cin>>Value2;
    
    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}