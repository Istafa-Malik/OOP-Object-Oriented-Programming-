#include<iostream>
using namespace std;
class Shape
{
     public:
         int width, height;

     public:
     Shape( )
    {
              width = 0;
              height = 0;
    }
        virtual int area()
        {
               cout << "Parent class area :" <<endl;
               return 0;
        }
};

class square: public Shape
{
      public:
          square()
          {
			cout<<"\n Enter value for width";
			cin>>width;
			cout<<"\n Enter value for height";
			cin>>height;
          }

           int area()
          {
              int s;
              s=(2*width)+(2*height);
              cout << "Area of Square is : "<<s<<endl;
              return s;
          }

};

int main()
{
    Shape S;
    square S1;
    S1.area();
}
