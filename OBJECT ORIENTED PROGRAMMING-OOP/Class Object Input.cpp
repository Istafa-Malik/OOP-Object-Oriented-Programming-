#include <iostream>
#include <string>
using namespace std;
class student
{
	public:
	int roll;
	float average;
	int sum;
	int Phy,Chem,Bio;
	public:
		void input()
		{
			cout<<"Enter your Roll "<<endl;
			cin>>roll;
			cout<<"Enter your Physics Marks "<<endl;
			cin>>Phy;
			cout<<"Enter your Biology Marks "<<endl;
			cin>>Bio;
			cout<<"Enter your Chemistry Marks "<<endl;
			cin>>Chem;
		}
	void result()
		{
		sum=Phy+Chem+Bio;
		average=sum/3;
		cout<<"Roll = "<<roll<<"\n total obtain marks = "<<sum<<"\n Average = "<<average;
	}
};
int main()
{
	student istafa;
	istafa.input();
	istafa.result();
	return 0;
}

