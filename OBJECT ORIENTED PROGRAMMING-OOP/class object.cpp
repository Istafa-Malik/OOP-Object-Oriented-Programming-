#include <iostream>
#include <string>
using namespace std;
class student
{
	public:
	int roll;
	string name;
	int marks;
	public:
	void showmarks()
	{
		cout<< " \n student marks are"<<marks;
	}
	void sdata()
	{
	cout<< "\n student rollno is ="<<roll<<"\n  and name is ="<<name;
	}
};


int main()
{
	student istafa,ali;
	istafa.roll=12;
	istafa.name="istafa malik";
	istafa.marks=74;
	ali.roll=24;
	ali.name="ali kamran";
	ali.marks=45;
	istafa.showmarks();
	istafa.sdata();
	ali.showmarks();
	ali.sdata();
	return 0;
}
