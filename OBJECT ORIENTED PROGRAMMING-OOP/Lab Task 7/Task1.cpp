#include<iostream>
using namespace std;
class Circletype
{
public:
void setRadius(double r)
{
if (r >= 0)
{
  radius = r;
}
else
 {
 radius = 0;
 }
}
double getRadius()
{
return radius;
}
double area()
{
return 3.1416 * radius * radius;
}
double circumference()
{
return 2 * 3.1416 * radius;
}
Circletype(double r = 0)
{
setRadius(r);
}
void Result()
{
	cout<<"The Area of Circle is ("<<area()<<")"<<endl;
	cout<<"The Circumfrerence is ("<<circumference()<<")"<<endl;
	cout<<"The Radius of Circle is ("<<radius<<")"<<endl;
}
private:
float radius;
};
class cylinderType: public Circletype
{
   private:
   	      double hight,x,y;
   public:
   	void height(double h)
   	{
   		if (hight>0)
   		hight=h;
   		else
   		hight= 0;
	
	}
	void center(double x1,double y1)
	{
		x=x1;
		y=y1;
	}
    void volume()
	{
		cout<<"The volume = "<<area()*hight<<endl;
	}
	void surfacearea()
	{
		cout<<"The surface area = "<<(2*3.14*getRadius()*hight)+(2*area())<<endl;
	}    	
};

int main()
{
	double r,h,x,y;
	cylinderType c;	
	cout<<"Enter the radius of circle ";
	cin>>r;
	cout<<"Enter the hight if cylinder ";
	cin>>h;
	cout<<"Enter the point X ";
	cin>>x;
	cout<<"Enter the point Y ";
	cin>>y;
	c.height(h);
	c.setRadius(r);
	c.Result();
	c.center(x,y);
	c.volume();
	c.surfacearea();
	return 0;
	
}

