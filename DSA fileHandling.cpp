#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //logic for writing in the file
    ofstream f;
    f.open("AFile.txt",ios::app);

    if(!f)
    {
        cout<<"File not present."<<endl;
    }
    else
    {
        f<<"\nHi Im Digvijay."<<endl;
        f<<"Closing the file"<<endl;
        cout<<"wrote in the file"<<endl;
    }
    f.close();

    //logic for reading from file
    ifstream f1;
    f1.open("AFile.txt",ios::in);
    if(!f1)
    {
        cout<<"File not present."<<endl;
    }
    else
    {
        string data;
        while(getline(f1,data))
        {
            cout<<data<<endl;
        }
    }
    f1.close();
    //rename("AFile.txt","BFile.txt");
    return 0;
}
