///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                   //
//  File name :     Program42.cpp                                                                                    //
//  Description :   Used to dynamically allocate an array, accept & display elements and find the largest element.   //
//  Author :        Pallavi Omprakash Malewar                                                                        //
//  Date :          06/09/2025                                                                                       //
//                                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iLength = 5)
        {
            cout<<"Inside Constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
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

        int Largest()
        {
            int iMax = 0 , iCnt = 0;

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
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    int iRet = 0;
    iRet = aobj.Largest();

    cout<<"Largest Number is : "<<iRet<<endl;

    return 0;
}