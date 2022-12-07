#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class addressType//First class.
{
   public:
    string addresss;
    addressType()
    {
    addresss="   ";
    cout<<"Constructor Created!"<<endl;
    }
    void storeaddress(string ad)
    {

        addresss=ad;
    }

    void printaddress()
    {

    cout<<addresss<<endl;
    }
};
    class personType//Second class.
	 {
        public:
            string first,last;
        public:
            personType(string first="\t",string last="\t")
            {  cout<<"Constructor Created!"<<endl;
                setName(first,last);
            }
             void printname() const
             {
                 cout<<last<<"\t"<<first;
             }
             void setName(string First,string Last)
             {
                 first=First;
                 last=Last;
             }
             string getFirstName() const
             {
                 return first;
             }
             string getLastName() const
             {
                 return last;
             }
    };
    class dateType//Third class.
    {  
	    public:
        int dday,dmonth,dyear;
        public:
       dateType()
        {
        	cout<<"Costructor created!"<<endl;
        	int dmonth=0,dday=0,dyear=0;
        }
        void setDate(int month, int day, int year)
        {
            dmonth=month;
            dday=day;
            dyear=year;
        }
        int getDay() const
        {
            return dday;
        }
        int getMonth() const
        {
            return dmonth;
        }
        int getYear() const
        {
            return dyear;
        }

        void printDate() const
        {
            cout << dmonth << "/" << dday << "/" << dyear;
        }
};
class extPersonType:public addressType,public personType,public dateType
    { 
	public:
        string person;
        int ph;
    public:
        extPersonType()
        {
        person="   ";
        ph=0;
        }
        void store(string per,int phn)
    {
        person=per;
        ph=phn;
    }

    void print()
    {
        cout<<person<<"\t"<<ph;
    }
};

class addressBookType//Fourth class.
{
public:
	extPersonType e[2];//Class Mumber. 
    string file;

    void input()
    {   
	    string first,last,P2,P3;
        int D,M,Y;
        char P1[1000];
        ifstream in;
        in.open("c.txt");
        for(int i=0;i<2;i++)
    {
            in>>first;
            in>>last;
            in>>D>>M>>Y;
             e[i].setDate(M,D,Y);
            e[i].setName(first,last);
            in>>P2>>D;
            e[i].store(P2,D);//Relating Extraperson type.
            getline(in,P3,'\n');
            e[i].storeaddress(P3);
    }
    }

    void output()
    {
            cout<<"Last_Name\t"<<"First_Name\t"<<"D.O.B\t"<<"Relation\t";
            cout<<"Ph. No.\t"<<"  Address "<<endl;
            for(int i=0;i<2;i++)
            {
            e[i].printname();
            cout<<"\t";
            e[i].printDate();
            cout<<"\t";
            e[i].print();
            cout<<"\t";
            e[i].printaddress();
            }
    }
        void search()
        {  int counter=0;
        string n;
        cout<<"Enter the Last Time To Search= "<<endl;
        cin>>n;
            for(int i=0;i<2;i++) 
            {
            if(n==e[i].getLastName())
            {
				  if(counter==0)
                {
				  cout<<"Person(s) With Last Name "<<n<<" are="<<endl<<endl;
				}
            cout<<" D.O.B  = "<<endl;
            e[i].printDate();
            cout<<" Relation And Ph. No. is = "<<endl;
            e[i].print();
            cout<<" Address is = ";
            e[i].printaddress();
            cout<<endl<<endl;
            counter++;
            }
            }
            if(counter==0)
            {
			    cout<<"Not Found !"<<endl;
			}
        }
        void searchm()
        {
		 int m,counter=0;
        cout<<"Enter The Month You Want to Search For="<<endl;
        cin>>m;
            for(int i=0;i<2;i++)
            {
                if(m==e[i].getMonth())
                {      if(counter==0)
                    {
					cout<<"Name(s) of Person(s) with Same Month Of Birth are "<<endl<<endl<<endl;
                    cout<<"Last Name   "<<"First Name "<<endl;
					}
                    e[i].printname();
                    cout<<endl;
                    counter++;
                }
            }
            if(counter==0)
            {
		    cout<<"Not Found ! "<<endl;
		    }
        }

        void searchl()
        {
            string n,l;
            int j,counter=0;
            cout<<"Enter the First Last Name ="<<endl;
            cin>>n;
            cout<<"Enter the Second Last Name = "<<endl;
            cin>>l;

            for(int i=0;i<2;i++)
            {
                if(n==e[i].getLastName())
                {
                    for(j=i;l==e[j].getLastName();j++)
                        { 
						 if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[j].printname();
                            cout<<endl<<endl;
                            counter++;
                        }
                }
            }
            if(counter==0)
            {
			    cout<<"Not Found ! "<<endl;
			}
        }

        void searchr()
        { 
		int counter=0,n;
        cout<<"Enter Your Num According to the Choices Below = "<<endl;
        cout<<"1. For Searching of Family Members ="<<endl;
        cout<<"2. For Searching of Friends"<<endl;
        cout<<"3. For Searching of Business Associates "<<endl;
        cin>>n;
            for(int i=0;i<2;i++)
            {
                if(n==1)
                {
                    if(e[i].person=="Family")
                    {   if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }

                if(n==2)
                {
                    if(e[i].person=="Friend")
                    {   
					  if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }

                if(n==3)
                {
                    if(e[i].person=="Business")
                    {   
					  if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name  "<<"First Name  "<<endl;
                        }
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }
            } 
			if(counter==0)
			{
			cout<<"Not Found !"<<endl;
		    }
        }


        void choices()
        {   
		int i;
            cout<<"Enter Nos. According to Choices Below = "<<endl;
            cout<<"1. Search for a person by last name="<<endl;
            cout<<"2. Print the address, phone number, and date of birth of a given person="<<endl;
            cout<<"3. Print the names of the people whose birthdays are in a given month="<<endl;
            cout<<"4. Print the names of all the people between two last names="<<endl;
            cout<<"5. Print the names of all family members, friends, or business associates="<<endl;
            cin>>i;
            if(i==1)
            search();
            else if(i==2)
            search();
            else if(i==3)
            searchm();
            else if(i==4)
            searchl();
            else if(i==5)
            searchr();
            else
            cout<<"Wrong option try agaim!"<<endl;
        }
};
int main()
{
    addressBookType A;
    A.input();
    A.choices();
    return 0;
}
