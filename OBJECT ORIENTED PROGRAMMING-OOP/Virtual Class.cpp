#include <iostream>
using namespace std;
class base
{
	public:
		virtual void A()
		{
 	     cout<<"Virtual Class Base "<<endl;
 	    } 
};
class derive:public base
{
	public:
		void A()
		{
	     cout<<"Derive Class "<<endl;
	    }
};

int main()
{
	derive o;
	base *ptr;
	ptr = &o;
	ptr->A();
 return 0;
}

