#include<iostream>
#include<string>
using namespace std;

class Worker
{
private:
	string* workerName;
	string SSN;

public:
	
	Worker()
	{
		workerName = new string;

		workerName = 0;
		SSN = "xxx-xx-xxxx";

	}

	
	Worker(string n)
	{
		workerName = &n;

	}

	~Worker()
	{
		delete workerName;
	}
	
	void setWorkerName(string n)
	{
		workerName = &n;
	}

	
	void setSSN(string ssn)
	{
		SSN = ssn;
	}

	string getWorkerName()
	{
		return *workerName;
	}

	string getSSN()
	{
		return SSN;
	}

	
	virtual void printValues()
	{
		cout << "Worker Name: ";
		cout << *workerName;
		cout << endl;
		cout << "Social Security Number: ";

		cout << SSN << endl;
	}

	

};


class payWorker : public Worker
{
private:
	int dependents;
	double payRate;
public:
	
	void setPayRate(double payRate)
	{
		this->payRate = payRate;
	}

	
	void setDependents(int dependents)
	{
		this->dependents = dependents;
	}

	
	double getPayRate()
	{
		return payRate;
	}

	int getDependents()
	{
		return dependents;
	}

	
	void printValues(Worker& obj)
	{
		obj.printValues();
		cout << "Pay Rate: $" << payRate << endl;
		cout << "Number of Dependents: " << dependents << endl;
	}
};

int main()
{
	payWorker person;
    float prate;
	string name,ssn;
    cout<<"Enter the name of worker=";
    cin>>name;
    cout<<"Enter the ssn of worker=";
    cin>>ssn;
    cout<<"Enter the worker Payrate=";
    cin>>prate;
	person.setWorkerName(name);
	person.setSSN(ssn);
	person.setPayRate(prate);
	person.setDependents(5);

	cout << "In Base class Worker, workerName is " << person.getWorkerName() << endl;
	cout << "In Base class Worker, SSN is " << person.getSSN() << endl;
	cout << "In derived class payWorker, payRate is $" << person.getPayRate() << endl;
	cout << "In derived class payWorker, dependent(s) are " << person.getDependents() << endl;

	person.printValues(person);

	return 0;
}
