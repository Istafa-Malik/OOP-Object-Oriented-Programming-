#include<iostream>
#include<string>
using namespace std;

class number
{

public:
    int num;

    number() : num(1)
    {
    }

    void setValue()
    {
        int n;
        do
        {
            cout<<"Enter A Number from 01 to 100 \n";
            cin>>n;
            if(n>=1 && n<=100)
                num=n;
            else
                cout<<"PLease Enter a Number from 01 to 100 \n";

        }while (!(n>0 && n<101));
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
        cout<< "\n\nAfter Assigning 2nd Object value to first object :\n";
        cout<<"First object value will be"<<num<<"\n2nd object value will be "<<n.num<<"\n\n";
    }

};

int main()
{
    number no1,no2;
    no1.setValue();
    no2.setValue();
    no1>no2;
    no1<no2;
    no1==no2;
    no1!=no2;
    no1=no2;
    return 0;

}

