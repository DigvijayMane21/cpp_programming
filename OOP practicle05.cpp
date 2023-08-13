#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
	string name;
	int id;
	double salary;
	
public:
	void add()
	{
		cout<<"Name: "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"\nID: "<<endl;
		cin>>id;
		cout<<"\nSALARY: "<<endl;
		cin>>salary;
	}
	
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"SALARY: "<<salary<<endl;
	}
};

int main()
{
	fstream f;
	int i,n;
	f.open("demo.txt",ios::out);
	cout<<"Enter no of employees to store: "<<endl;
	cin>>n;
	Employee e[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter info of employe"<<i+1<<endl;
		e[i].add();
		f.write((char*)&e[i],sizeof e[i]);
	}
	f.close();
	
	f.open("demo.txt",ios::out);
	for(i=0;i<n;i++)
	{
		cout<<"\nEmployee: "<<i+1<<endl;
		f.write((char*)&e[i],sizeof e[i]);
		e[i].display();
	}
	f.close();
	
	return 0;
}
