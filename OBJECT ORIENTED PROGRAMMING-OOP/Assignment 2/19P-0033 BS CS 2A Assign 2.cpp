

/*class wheel
{

string state;

public:

    void set_wheel_state(string s)
    {
       state=s;
    }

    string get_wheel_state()
    {
        return state;
    }
};
class car
{

wheel w[4];

public:

    void set_car_to_moving()
    {
        for(int i=0;i<4;i++)
        {
            w[i].set_wheel_state("Turning");
        }
    }

    void set_car_to_stopped()
    {
        for(int i=0;i<4;i++)
        {
            w[i].set_wheel_state("Stopped");
        }
    }

    void print_car_wheels_state()
    {
        cout<<"Car state: - \n";

        for(int i=0;i<4;i++)
        {
            cout<<"Wheel "<<i<<" is "<<w[i].get_wheel_state()<<"-\n";
        }
    }

};

int  main()
{
    car C;
    C.set_car_to_moving();
    C.print_car_wheels_state();
}*/




#include<iostream>
#include<string>
using namespace std;
class person
{

public:
    string name;
    int age;


    void setname()
    {
        cout<<"Enter the Name \n";
        cin>>name;
    }

    void setage()
    {
        cout<<"Enter the Age \n";
        cin>>age;
    }
};

class student : public person
{

public:

    int std_ID,gpa;

    student(int id=0,int gp=0)
    {
         std_ID=id;
        gpa=gp;
    }

    void setstdid( int id)
    {
       std_ID=id;
    }

    void setstdgpa( int gp)
    {
       gpa=gp;
    }


};

class employee : public person
{

public:

    int empl_ID,salary;

    employee(int id=0,int sa=0)
    {
        empl_ID=id;
        salary=sa;
    }

    void setemid(int id)
    {
        empl_ID=id;
    }
    void setemsalary(int sa)
    {
        salary=sa;
    }
};

class functionality : public student ,public employee
{
public:
int i;
functionality()
{
    i=0;
}
void assign(int opt)
 {
     int I,G;
     setname();
     setage();

     if(opt==0)
     {
         cout<<"Enter the ID of Student \n";
         cin>>I;
         setstdid(I);
         cout<<"Enter the GPA of Student \n";
         cin>>G;
         setstdgpa(G);
     }

     if(opt==1)
     {
         cout<<"Enter the ID of Employee \n";
         cin>>I;
         setemid(I);
         cout<<"Enter the Salary of Employee \n";
         cin>>G;
         setemsalary(G);
     }
 }

    void change()
    {
        string ch;
        int id,s,opt;
        cout<<"Enter Whose Record you want to Change(e/s).....\n\n";
        cin>>ch;
        cout<<"Enter your Choices According to the Entries Below :\n";
        cout<<"1. Change Name \n";
        cout<<"2. Change Age \n";
        cout<<"3. Change ID \n";
        cout<<"4. Change Salary/GPA \n";
        cin>>opt;
        if(opt==1)
        {
            setname();
        }
        if(opt==2)
        {
            setage();
        }
        if(opt==3)
        {
            cout<<"Enter A New ID\n";
            cin>>id;
            if(ch=="e")
            {
                setemid(id);
            }
            if(ch=="s")
            {
                setstdid(id);
            }
        }
        if(opt==4)
        {
            cout<<"Enter A New Salary/GPA\n";
            cin>>s;
            if(ch=="e")
            {
                setemsalary(s);
            }
            if(ch=="s")
            {
                setstdgpa(s);
            }
        }
    }


    void deleted()
    {
        name=" ";
        age=0;
        empl_ID=0;
        salary=0;
        gpa=0;
        std_ID=0;
    }

    functionality& printaddress(functionality& fun)
    {

        return *this;
    }

};
int main()
{
    functionality F;
    return 0;
}

