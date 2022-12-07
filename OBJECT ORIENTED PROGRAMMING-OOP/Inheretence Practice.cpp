#include <iostream>
#include <string>
using namespace std;
class base
{
	public:
	int roll,m,p;
	string name;
	public:
		void input()
		{
			cout<<"Enter student name "<<endl;
			cin>>name;
			cout<<"Enter the roll number "<<endl;
			cin>>roll;
			cout<<"Enter the marks secured in maths "<<endl;
			cin>>m;
			cout<<"Enter the marks secured in physics "<<endl;
			cin>>p;
		}
};
class derive:public base
{
	public:
		void output()
		{
			cout<<"Name of Student : "<<name<<endl;
			cout<<"Roll Number of Student : "<<roll<<endl;
			cout<<"Marks obtained in Physics "<<p<<endl;
			cout<<"Marks obtained in Maths "<<m<<endl;
		}
};
int main()
{
	derive o;
	base *ptr;
	ptr=&o;
	//ptr->input();
	//ptr->output();
	ob.input();
	ob.output();
	return 0;
}
