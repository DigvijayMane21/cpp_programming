#include<iostream>
using namespace std;

struct node
{
    int type;
    int id;
    struct node *next,*pre;
};
struct node *head=NULL;

void Insert()
{
    struct node *temp=new node;
    cout<<"{1-->serious, 2-->non serious, 3-->general)"<<endl;
    cout<<"Enter the type of patient (1/2/3): ";
    cin>>temp->type;
    cout<<"Enter the id of patient : ";
    cin>>temp->id;

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->tyoe<=temp->type && ptr->next!=Null)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr ->next=temp;
    }
}

void display;
{
    temp=head
    while(temp->next!=NULL)

        cout<<temp->type<<"    "<<temp.id<<endl;
    }
}
