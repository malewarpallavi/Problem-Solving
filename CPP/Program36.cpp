/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program36.cpp                                                                  //
//  Description :   Used to swap 2 entities                                                        //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

// Generic Program

template <class T>

void Swap(T *No1 , T *No2)
{
    T temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;

}

int main()
{
    int a = 10 , b = 11;

    cout<<"Value of a before swap : "<<a<<endl;
    cout<<"value of b before swap : "<<b<<endl;
    Swap(&a , &b);
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;


    char x = 'A' , y = 'B';

    cout<<"Value of x before swap : "<<x<<endl;
    cout<<"Value of y before swap : "<<y<<endl;
    Swap(&x , &y);
    cout<<"Value of a after swap : "<<x<<endl;
    cout<<"Value of y after swap : "<<y<<endl;

    return 0;
}