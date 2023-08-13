//A constructor with parameters and assign this parameters to data member of this object this constructor is called parameterised.

// A constructor which is automatically called at the time of copying the object is called copy constructor.


#include<iostream>
using namespace std;
class Car
{
public:
    int avg;
    string name;
    Car()   //default constructor
    {
        cout<<"Object created."<<endl;
    }
    Car(int a,string nm)  //parametrized constructor
    {
        avg=a;
        name=nm;
    }
    Car(const Car &cpy)  //copy constructor
    {
        avg=cpy.avg;
        name=cpy.name;
    }
};

int main()
{
    Car car;     // or use Car car=Car();
    car.avg=10;
    car.name="XYZ";
    cout<<car.avg<<endl;
    cout<<car.name<<endl;



    Car cr(20,"ABC");    //or use Car cr=Car(20,"ABC");
    cout<<cr.avg<<endl;
    cout<<cr.name<<endl;

    Car crc=Car(cr);

    return 0;
}

