#include <iostream>
#include <fstream>
#include <string>
#define MAX 20
using namespace std;

// Structure of Employee
struct Employee {
    string name;
    int code;
    string designation;
    int salary;
};

void showMenu();
void build();
void insert();
void deleteRecord();
void searchRecord();
void displayTable();

Employee emp[MAX];
int num = 0;

void showMenu()
{
    cout << "\n*******MAIN MENU*********" << endl;
    cout << "1.Build Table" << endl;
    cout << "2.Insert New Entry" << endl;
    cout << "3.Delete Entry" << endl;
    cout << "4.Search a Record" << endl;
    cout << "5.Display Table " << endl;
    cout << "6.Exit" << endl;
    int option;
    cout << "Enter your choice: ";
    cin >> option;

    if (option == 1)
    {
        build();
    }
    else if (option == 2)
    {
        insert();
    }
    else if (option == 3)
    {
        deleteRecord();
    }
    else if (option == 4)
    {
        searchRecord();
    }
    else if (option == 5)
    {
        displayTable();
    }
    else if (option == 6)
    {
        return;
    }
    else
    {
        cout << "Expected Options are 1/2/3/4/5/6" << endl;
        showMenu();
    }
}

void build()
{
    ofstream outFile("employee.dat", ios::out | ios::binary);
    if (!outFile)
    {
        cerr << "Error creating file." << endl;
        return;
    }
    cout << "Maximum Entries can be " << MAX << endl;
    cout << "Enter the number of Entries required: ";
    cin >> num;
    if (num > MAX)
    {
        cout << "Maximum number of Entries are " << MAX << endl;
        num = MAX;
    }

    cout << "Enter the following data:" << endl;
    for (int i = 1; i <= num; i++)
    {
        cout << "Name"<<i<<": ";
        cin >> emp[i].name;
        cout << "Employee ID"<<i<<": ";
        cin >> emp[i].code;
        cout << "Designation"<<i<<": ";
        cin >> emp[i].designation;
        cout << "Salary"<<i<<": ";
        cin >> emp[i].salary;
        outFile.write(reinterpret_cast<const char*>(&emp[i]), sizeof(Employee));
    }
    outFile.close();
    showMenu();
}

void insert()
{
    if (num >= MAX)
    {
        cout << "Employee Table Full" << endl;
        showMenu();
        return;
    }

    ofstream outFile("employee.dat", ios::app | ios::binary);
    if (!outFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    int i = num;
    num++;

    cout << "Enter the information of the Employee:" << endl;
    cout << "Name: ";
    cin >> emp[i].name;
    cout << "Employee ID: ";
    cin >> emp[i].code;
    cout << "Designation: ";
    cin >> emp[i].designation;
    cout << "Salary: ";
    cin >> emp[i].salary;
    outFile.write(reinterpret_cast<const char*>(&emp[i]), sizeof(Employee));
    outFile.close();

    showMenu();
}

void deleteRecord()
{
    int code;
    cout << "Enter the Employee ID to Delete Record: ";
    cin >> code;

    ifstream inFile("employee.dat", ios::in | ios::binary);
    if (!inFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    ofstream outFile("temp.dat", ios::out | ios::binary);
    if (!outFile)
    {
        cerr << "Error creating file." << endl;
        inFile.close();
        return;
    }

    bool recordFound = false;
    Employee temp;

    while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(Employee)))
    {
        if (temp.code != code)
        {
            outFile.write(reinterpret_cast<const char*>(&temp), sizeof(Employee));
        }
        else
        {
            recordFound = true;
        }
    }

    inFile.close();
    outFile.close();

    if (!recordFound)
    {
        cout << "Record not found." << endl;
    }
    else
    {
        if (remove("employee.dat") == 0 && rename("temp.dat", "employee.dat") == 0)
        {
            cout << "Record deleted successfully." << endl;
        }
        else
        {
            cerr << "Error deleting record." << endl;
        }
    }

    showMenu();
}

void searchRecord()
{
    int code;
    cout << "Enter the Employee ID to Search Record: ";
    cin >> code;

    ifstream inFile("employee.dat", ios::in | ios::binary);
    if (!inFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    bool recordFound = false;
    Employee temp;

    while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(Employee)))
    {
        if (temp.code == code)
        {
            cout << "Name: " << temp.name << endl;
            cout << "Employee ID: " << temp.code << endl;
            cout << "Designation: " << temp.designation << endl;
            cout << "Salary: " << temp.salary << endl;
            recordFound = true;
            break;
        }
    }

    inFile.close();

    if (!recordFound)
    {
        cout << "Record not found." << endl;
    }

    showMenu();
}

void displayTable()
{
    ifstream inFile("employee.dat", ios::in | ios::binary);
    if (!inFile)
    {
        cerr << "Error opening file." << endl;
        return;
    }

    Employee temp;
    int count = 1;

    cout << "-------------------------Employee Table-------------------------" << endl;
    cout << "No.\tName\t\tEmployee ID\tDesignation\tSalary" << endl;

    while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(Employee)))
    {
    cout<<count<<"\t"<<temp.name<<"\t\t"<<temp.code<<"\t\t"<<temp.designation<<"\t\t"<<temp.salary<<endl;
    count++;
    }

    inFile.close();
    showMenu();
}

int main()
{
    showMenu();
    return 0;
}
