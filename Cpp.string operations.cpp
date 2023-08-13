#include<iostream>
/* string*/
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}


/* string printing upto first space
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    cin>>name;
    cout<<name;
    return 0;
}
*/


/* string priting along with spaces & beyond
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    getline(cin,name);
    cout<<name;
    return 0;
}
*/

/* length of string
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Name : "<<name<<endl;
    int len=name.length();
    cout<<"Length : "<<len<<endl;
    return 0;
}
*/


/* string coping
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Name : "<<name<<endl;
    int len=name.length();
    cout<<"Length : "<<len<<endl;
    string copy=name;
    cout<<"Copied : "<<copy<<endl;
    return 0;
}
*/

/* Concatination
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Name : "<<name<<endl;
    string concat="Hello "+name;
    cout<<concat<<endl;
    return 0;
}
*/

/*
using namespace std;
int main()
{
    string name="";
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Name : "<<name<<endl;
    string concat="Hello "+name;
    cout<<concat<<endl;
    cout<<name[2]<<"  "<<name[4];
    return 0;
}
*/
