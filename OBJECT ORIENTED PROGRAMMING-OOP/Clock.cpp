#include<iostream>
#include<string>
using namespace std;

class clockType
{
public:
    int hr,min,sec;

    clockType()
    {
        cout<<"Constructor Created "<<endl;
        hr=0;
        min=0;
        sec=0;
    }



    clockType(int hrs,int mnt,int se)
    {
        hr=hrs;
        min=mnt;
        sec=se;
    }

    clockType(clockType& C) //copy constructor
    {
        hr=C.hr;
        min=C.min;
        sec=C.sec;
    }

    void operator ==(clockType& C)
    {   
        if(C.hr==this->hr && C.min==this->min && C.sec==this->sec)
        {
            cout<<"Comparison of Objects : \n       both objects have same values"<<endl;
        }
        else
            cout<<"Comparison of objects : \n       both objects have different values"<<endl;
    }


    clockType& operator =(clockType& C1)
    {
        hr=C1.hr;
        min=C1.min;
        sec=C1.sec;
        return *this;
    }

    void operator <<(clockType& C)
    {
        cout<<hr<<endl;
        cout<<min<<endl;
        cout<<sec<<endl;
    }
};
int main()
{ string S;
    clockType C(10,11,12),C1(C),C2;
    C=C1;
    C1<<C2;
    C1== C;
    return 0;
}

