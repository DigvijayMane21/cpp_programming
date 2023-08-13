#include<iostream>
/* max number finding
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Max no:"<<max;
    return 0;
}
*/


/* min number finding
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<"Min no:"<<min;
    return 0;
}
*/



/* Descending sort
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]>arr[i])
           {
               int t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/* Ascending sort
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[i])
           {
               int t=arr[i];
               arr[i]=arr[j];
               arr[j]=t;
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


/* string
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
*/

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
