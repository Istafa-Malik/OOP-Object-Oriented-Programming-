#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int roll,marks;

};


int main()
{
	student ali,istafa;
	ali.name="ali fraz";
	ali.roll=34;
	ali.marks=56;
	cout<< "enter the name of istafa";
	cin>>istafa.name;
	cout<<"enter roll";
	cin>>istafa.roll;
	cout<<"enter marks of istafa";
	cin>>istafa.marks;
	cout<<"ali detail is as follows \n "<<ali.name<<"\t"<<ali.roll<<"\t"<<ali.marks;
	cout<<"\n istafa detail is \n"<<istafa.name<<"\n"<<istafa.roll<<"\n"<<istafa.marks;
	return 0;
}
