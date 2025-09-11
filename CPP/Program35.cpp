/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program35.cpp                                                                  //
//  Description :   Used to swap 2 numbers                                                         //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

// Call by Address

void Swap(int *No1 , int *No2)
{
    int temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;

}

int main()
{
    int a = 10 , b = 11;

    Swap(&a , &b);

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;

    return 0;
}