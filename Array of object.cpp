#include<iostream>
/* Student info
using namespace std;
class Student
{
public:
    int id;
    string name;
    float marks;
    char gender;

    Student()
    {

    }
    Student(int idd,string nm,float mrk,char gndr)
    {
        id=idd;
        name=nm;
        marks = mrk;
        gender=gndr;

    }

};

int main()
{
    int n=3;
    Student st[n];
    int idd;
    string nm;
    float mrk;
    char gndr;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter id : "<<endl;
        cin>>idd;
        cout<<"Enter name : "<<endl;
        cin>>nm;
        cout<<"Enter marks : "<<endl;
        cin>>mrk;
        cout<<"Enter gender : "<<endl;
        cin>>gndr;
        st[i]=Student(idd,nm,mrk,gndr);

    }
    cout<<"Name\tId\tMarks\tGender"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<st[i].name<<"  \t"<<st[i].id<<" \t"<<st[i].marks<<"\t"<<st[i].gender<<" "<<endl;
    }
    return 0;
}
*/


using namespace std;
class Employe
{
private:
    int id;
    string name;
    float salary;
    char shift;
public:
    Employe()
    {

    }
    Employe(int idd,string nm,float slry,char sft)
    {
        id=idd;
        name=nm;
        salary = slry;
        shift=sft;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    char getShift()
    {
        return shift;
    }

};
void Display(Employe ep[],int n)
{
    cout<<"Name\tId\tSalary\tShift"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ep[i].getName()<<"  \t"<<ep[i].getId()<<" \t"<<ep[i].getSalary()<<"\t "<<ep[i].getShift()<<endl;
    }
}
void Sort(Employe ep[],int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(ep[j].getId() < ep[i].getId())
           {
               Employe t=ep[i];
               ep[i]=ep[j];
               ep[j]=t;
           }
        }
    }
    Display(ep, n);

}
int main()
{
    int n=3;
    Employe ep[n];
    int idd;
    string nm;
    float slry;
    char sft;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter id : "<<endl;
        cin>>idd;
        cout<<"Enter name : "<<endl;
        cin>>nm;
        cout<<"Enter salary : "<<endl;
        cin>>slry;
        cout<<"Enter shift : "<<endl;
        cin>>sft;
        ep[i]=Employe(idd,nm,slry,sft);

    }
    Sort(ep, n);


    return 0;
}
