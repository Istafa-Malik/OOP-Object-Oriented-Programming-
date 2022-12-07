#include<iostream>
#include<string>
using namespace std;

class number
{

public:
    int num;

    number()
    {
        cout<<"Constructor Created !!!\n";
        num=1;
    }

    number(int n)
    {
         if(n>=1 && n<=100)
                num=n;
         else
                cout<<"PLease Enter a Number Within the Range of (1-100) !!!:\n";
    }

    void set()
    {
        int n;
        do
        {
            cout<<"Enter A Number Within the Range of (1-100)\n";
            cin>>n;
            if(n>=1 && n<=100)
                num=n;
            else
                cout<<"PLease Enter a Number Within the Range of (1-100) !!!:\n";

        }while (!(n>0 && n<101));
    }

    int get()
    {
        return num;
    }

    void operator >(number& n)
    {
        if(num>n.num)
             cout<<num<<" is Greater than "<<n.num<<endl;
        else
            cout<<num<<" is Not Greater than "<<n.num<<endl;
    }

    void operator <(number& n)
    {
        if(num<n.num)
            cout<<num<<" is Smaller than "<<n.num<<endl;
        else
           cout<<num<<" is Not Smaller than "<<n.num<<endl;
    }

    void operator ==(number& n)
    {
        if(num==n.num)
            cout<<num<<" is EQUAL To "<<n.num<<endl;
        else
            cout<<num<<" is NOT EQUAL TO "<<n.num<<endl;
    }

    void operator !=(number& n)
    {
        if(num!=n.num)
            cout<<num<<" is NOT EQUAL TO "<<n.num<<endl;
        else
            cout<<num<<" is EQUAL To "<<n.num<<endl;
    }

    void operator =(number& n)
    {
        num=n.num;
    }

};

int main()
{
    number n,n1;
    n.set();
    n1.set();
    n>n1;
    n<n1;
    n==n1;
    n!=n1;
    n=n1;
    return 0;

}

