#Game using OOP 

#include<iostream>
#include<string>
using namespace std;

class enemy
{
	public:
		float size;
		string color;

		
	public:

		virtual void attack()=0;
		virtual int destroy()=0;
		virtual int capture()=0;
		
};

class alien : public enemy
{
	public:
		string eyes;
		string body;
		string ear;
	
	public:
alien ()
{
			
			size=5;
			color="yellow";
			eyes="BigBlue";
			body="NoHair";
			ear="bigEar";
			
		
	}
	void attack()
	{
		cout<<" *********Alien is Attacked by SkyArmy******"<<endl;
	}
	int destroy()
	{
		cout<<" 01 Alien is killed  "<<endl;
		return 0;	}
	int capture()
	{
		cout<<"****One alien is capture*****"<<endl;
		return 0;
	}
};

class monster : public enemy
{
	public:
		
		string eyes;
		string body;
		string feet;
	public:
		monster()
		{
		size=10;
		color="Brown";
		eyes="BigBlack";;
		body="hairy";
		feet="bigfeet";	
		}
		void attack()
		{
			cout<<"\n *************** Monsters are attacked by defender Ground Army ******** "<<endl;
		}
		void headshot()
		{
			cout<< "\n ***********Monster is headshot by Defender Ground Army"<<endl;
		}
		int destroy()
		{
			cout<<"\n Monster is Killed by Defender Ground Army ************"<<endl;
			return 0;
		}
		int capture()
	{
		cout<<"\n ****One alien is capture*****"<<endl;
		
		return 0;
	}
};

class defender{
	public:
	int size;
	int color;
	public:
	virtual attack();
	virtual destroy();
	virtual capture();
	
};
class skyarmy : public defender
{
	
};
class groundarmy : public defender
{
	
};

int main()
{
	int a,m,an=0,mn=0,hcount=0,te=0;
	
	alien a1;
	monster m1;
	string st;
	cout<<"\n Game Start *******\n How many aliens you want to enter"<<endl;
	cin>>a;
	alien al[a];
	cout<<"\n How many monster you want to enter"<<endl;
	cin>>m;
	monster mon[m];
	do{
	
	cout<<" Press e for exit"<<endl;
	cout<<"Press A for Attack \n H for Headshot Alien \n C for Capture Monster"<<endl;
	cout<<"\n Press a for attack \n h for Headshot montors \n c for Capture Monster"<<endl;
	cin>>st;
	if(st=="A")
		a1.attack();	
	else if (st=="H")
	{
	
		a1.destroy();
        a--;
        te=a+m;
	    cout<< "\n Total Enemy Left     ="<<te<<"\n Alien Left    ="<<a<<" \n Monster Left    = "<<m;
}
	else if(st=="a")
	
		m1.attack();
	
	else if (st=="h")
 {  m1.headshot();
 	hcount=hcount+ 1;
	if(hcount>=5)
	 m1.destroy() ;
	 m--;
	 te=a+m;
	 cout<< " Total Enemy Left     ="<<te<<"\n Alien Left    ="<<a<<" \n Monster Left    = "<<m;
}
	else if (st=="C")
{
	a1.capture();
	a--;
	te=a+m;
	    cout<< " Total Enemy Left     ="<<te<<"\n Alien Left    ="<<a<<" \n Monster Left    = "<<m;
	}
	else if (st=="c")
	{
	
	m1.capture();
    m--;
	te=a+m;
	 cout<< " Total Enemy Left     ="<<te<<"\n Alien Left    ="<<a<<" \n Monster Left    = "<<m;
}

	else
	cout<< "invalid input";
	
}while(st!="e");
	
	return 0;
}
