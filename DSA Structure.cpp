#include<iostream>
using namespace std;
/* inddex based
struct node
{
    int data;
    string name;
};

int main()
{
    int n=3;
    struct node arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: "<<endl;
        cin>>arr[i].data;
        cout<<"Enter the name: "<<endl;
        cin>>arr[i].name;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i].data<<"  "<<arr[i].name<<endl;
    }
    return 0;
}
*/

/* index based #2
typedef struct node
{
    int data;
    string name;
};

int main()
{
    int n=3;
    node arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: "<<endl;
        cin>>arr[i].data;
        cout<<"Enter the name: "<<endl;
        cin>>arr[i].name;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arr[i].data<<"  "<<arr[i].name<<endl;
    }
    return 0;
}
*/

typedef struct node
{
    int data;
    string name;
};

int main()
{
    int n=3;
    node arr[n];
    struct node *p=arr;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element: "<<endl;
        cin>>(p+i)->data;
        cout<<"Enter the name: "<<endl;
        cin>>(p+i)->name;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<(p+i)->data<<"  "<<(p+i)->name<<endl;
    }
    return 0;
}
