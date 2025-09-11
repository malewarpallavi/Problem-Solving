//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                  //
//  File name :     Program45.cpp                                                                                                   //
//  Description :   Used to accept, display, and find the largest element in a dynamically allocated array using class templates.   //
//  Author :        Pallavi Omprakash Malewar                                                                                       //
//  Date :          06/09/2025                                                                                                      //
//                                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Generic Program

#include<iostream>
using namespace std;

template <class T>

class ArrayX
{
    private:
        T *Arr;
        int iSize;

    public:
        ArrayX(int iLength = 5)
        {
            cout<<"Inside Constructor\n";
            iSize = iLength;
            Arr = new T[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the Elements :\n";
            int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the Array are :\n";

            int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        T Largest()
        {
            T iMax = 0.0f ;
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
};


int main()
{
    ArrayX <int>aobj1(5);

    aobj1.Accept();
    aobj1.Display();

    float iRet = 0.0f;
    iRet = aobj1.Largest();

    cout<<"Largest Number is : "<<iRet<<endl;

    ////////////////////////////////////////////////////////

    ArrayX <double>aobj2(4);

    aobj2.Accept();
    aobj2.Display();

    double dRet = 0.0;
    dRet = aobj2.Largest();

    cout<<"Largest Number is : "<<dRet<<endl;

    return 0;
}