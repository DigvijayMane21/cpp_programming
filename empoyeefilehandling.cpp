#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Employee
{
    string name;
    int id;
    double salary;
public:
    void accept()
    {
        cout<<"\nEnter name of the employee: ";
        cin>>name;
        cout<<"\nEnter id: ";
        cin>>id;
        cout<<"\nEnter salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    fstream f;
    int ch,n;
    f.open("demo.txt",ios::out);
    cout<<"\nEnter the no of employees to store: ";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter info of employee"<<i+1<<": \n";
        e[i].accept();
        f.write((char*)&e[i],sizeof e[i]);
    }
    f.close();

    f.open("demo.txt",ios::in);
    for(int i=0;i<n;i++)
    {
        cout<<"\nInfo of employee"<<i+1<<" is as follows.\n";
        f.write((char*)&e[i],sizeof e[i]);
        e[i].display();
    }
    f.close();
    return 0;
}














