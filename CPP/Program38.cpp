/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                 //
//  File name :     Program38.cpp                                                                  //
//  Description :   Used to dynamically allocate the memory in an integer Array                    //
//  Author :        Pallavi Omprakash Malewar                                                      //
//  Date :          06/09/2025                                                                     //
//                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0 , iCnt = 0;

    cout<<"Enter Number of Elements : ";
    cin>>iLength;

    ptr = new int[iLength];     //Dynamic Memory Allocation

    cout<<"Enter the Elements :\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the Array :\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }


    delete []ptr;

    return 0;
}