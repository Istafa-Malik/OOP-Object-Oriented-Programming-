#include<iostream>
using namespace std;
class person 
{
	public:
		void introduce()
		{
			cout<<"Hey from person"<<endl;
		}
};

class student : public person
{
	public:
		void introduce()
		{
			cout<<"Hey from Student"<<endl;
		}
};

class farmer: public person
{
	public:
		void introduce()
		{
			cout<<"Hey from Farmer"<<endl;
		}
};

void whosthis(person &p)
{
	p.introduce();
}

int main()
{
	farmer anil;
	student alex;
	whosthis (anil);
	whosthis (alex);
	return 0;
}
