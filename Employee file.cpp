#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
//Employee class Declaration
class Employee
{
    private:
        int code;
        char name[20];
        float salary;
    public:
        void read();
        void display();
        //will return employee code
        int getEmpCode()
        { return code;}
        //will return employee salary
        int getSalary()
        { return salary;}
        //will update employee salary
        void updateSalary(float s)
        { salary=s;}
};

//Read employee record
void Employee::read()
{
    cout<<"Enter employee code: ";
    cin>>code;
    cout<<"Enter name: ";
    cin.ignore(1);
    cin.getline(name,20);
    cout<<"Enter salary: ";
    cin>>salary;
}

//Display employee record
void Employee::display()
{
    cout<<code<<"\t"<<name<<"\t"<<salary<<endl;
}

//global declaration
fstream file;

//Will delete file when program is being executed because we create file in append mode
void deleteExistingFile()
{
    remove("EMPLOYEE.DAT");
}

//function to append record into file
void appendToFille()
{
    Employee x;
    //Read employee record from user
    x.read();
    file.open("EMPLOYEE.DAT",ios::binary|ios::app);
    if(!file)
    {
        cout<<"ERROR IN CREATING FILE\n";
        return;
    }
    //write into file
    file.write((char*)&x,sizeof(x));
    file.close();
    cout<<"!!!Record added successfully!!!\n";
}

void displayAll()
{
    Employee x;
    file.open("EMPLOYEE.DAT",ios::binary|ios::in);
    if(!file)
    {
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    cout<<"\nCODE\tNAME\tSALARY"<<endl;
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            x.display();
        }
    }
    file.close();
}

void searchForRecord()
{
    Employee x;
    int c;
    int isFound=0;
    cout<<"Enter employee code: ";
    cin>>c;
    file.open("EMPLOYEE.DAT",ios::binary|ios::in);
    if(!file)
    {
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getEmpCode()==c)
            {
                cout<<"RECORD FOUND\n";
                x.display();
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0)
    {
        cout<<"Record not found!!!\n";
    }
    file.close();
}

void increaseSalary()
{
    //read employee id
    Employee x;
    int c;
    int isFound=0;
    float sal;
    cout<<"enter employee code \n";
    cin>>c;
    file.open("EMPLOYEE.DAT",ios::binary|ios::in);
    if(!file)
    {
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getEmpCode()==c)
            {
                cout<<"Salary hike? ";
                cin>>sal;
                x.updateSalary(x.getSalary()+sal);
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0)
    {cout<<"Record not found!!!\n";}
    file.close();
    cout<<"!!!Salary updated successfully!!!"<<endl;
}

//Insert record by assuming that records are in ascending order
void insertRecord()
{
    //read employee record
    Employee x;
    Employee newEmp;
    //Read record to insert
    newEmp.read();
    fstream fin;
    //read file in input mode
    file.open("EMPLOYEE.DAT",ios::binary|ios::in);
    //open file in write mode
    fin.open("TEMP.DAT",ios::binary|ios::out);
    if(!file)
    {
        cout<<"Error in opening EMPLOYEE.DAT file!!!\n";
        return;
    }
    if(!fin)
    {
        cout<<"Error in opening TEMP.DAT file!!!\n";
        return;
    }
    while(file)
    {
        if(file.read((char*)&x,sizeof(x)))
        {
            if(x.getEmpCode()>newEmp.getEmpCode())
            {
                fin.write((char*)&newEmp, sizeof(newEmp));
            }
            fin.write((char*)&x, sizeof(x));
        }
    }
    fin.close();
    file.close();
    rename("TEMP.DAT","EMPLOYEE.DAT");
    remove("TEMP.DAT");
    cout<<"Record inserted successfully."<<endl;
}

int main()
{
    int ch;
    //if required then only remove the file
    deleteExistingFile();
    while(1)
    {
        cout<<"\n********MAIN MENU********"<<endl;
        cout<<"1.ADD AN EMPLOYEE"<<endl;
        cout<<"2.DISPLAY RECORDS"<<endl;
        cout<<"3.SEARCH FOR A RECORD"<<endl;
        cout<<"4.INCREASE SALARY"<<endl;
        cout<<"5.INSERT A RECORD"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your  choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                appendToFille();
                break;
            case 2 :
                displayAll();
                break;
            case 3:
                searchForRecord();
                break;
            case 4:
                increaseSalary();
                break;
            case 5:
                insertRecord();
                break;
            case 6:
                exit(0);
                break;
        }
    }
    return 0;
}
