#include<iostream>
#include<fstream>
using namespace std;

void insertData()
{
    //logic for writing in the file
    ofstream f;
    f.open("Student.txt",ios::app);

    if(!f)
    {
        cout<<"File not present."<<endl;
        return;
    }
    string roll,name,div,add;
    cout<<"\nEnter roll no: ";
    cin>>roll;
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter division: ";
    cin>>div;
    cout<<"\nEnter address: ";
    cin>>add;
    string k = roll+"\t"+name+"\t"+div+"\t"+add+"\n";
    f<<k;
    f.close();
}

void showData()
{
    //logic for reading from the file
    ifstream f;
    f.open("Student.txt",ios::in);

    if(!f)
    {
        cout<<"File not present."<<endl;
        return;
    }
    cout<<"rollNo\tName\tDiv\tAddress"<<endl;
    string data;
    while(getline(f,data))
    {
        cout<<data<<endl;
    }
    f.close();
}

void deleteData()
{
    ifstream f; ofstream f1;
    f.open("Student.txt",ios::in);
    f1.open("Student.txt",ios::out);
    if(!f || !f1)
    {
        cout<<"File Not present"<<endl;
        return;
    }
    string data; char key;
    cout<<"Enter Roll NO to delete: ";
    cin>>key;
    while(getline(f,data))
    {
        char d=data[0];
        if(d!=key)
        {
            f1<<data;
        }
    }
    f1.close();
    f.close();
    remove("Student.txt");
    rename("temp.txt","Student.txt");
}

int main()
{
    int ch;
    while(1)
    {
        cout<<"*********Main Menu********"<<endl;
        cout<<"1.Insert"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Delete a record."<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                insertData();
                break;

            case 2:
                showData();
                break;

            case 3:
                deleteData();
                break;

            case 4:
                exit(0);
                break;
        }
    }
    //rename("AFile.txt","BFile.txt");
    return 0;
}

