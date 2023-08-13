#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node*next;
    struct node*pre;
};

struct node*head=NULL,*tail=NULL;

void insert_end()
{
    int d;
    struct node *temp=new node;
    //struct node *temp=(struct node*)malloc(sizeof(struct node*));
    if(temp==NULL)
    {
        cout<<"Memory not alloted."<<endl;
        return;
    }
    else
    {
        cout<<"Enter data: "<<endl;
        cin>>d;
        temp->data=d;
        temp->next=NULL,temp->pre=NULL;
    }
    if(head==NULL)
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->pre=tail;
        tail=temp;
    }
}

void display()
{
    struct node*temp=head;
    cout<<"Elements: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void revDisplay()
{
    struct node*temp=tail;
    cout<<"Elements: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->pre;
    }
}

void delet_end()
{
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    else if(head->next==NULL)
    {
        head=NULL;
        tail=NULL;
        free(head);
        free(tail);
    }
    else
    {
        struct node*temp=tail;
        tail=tail->pre;
        tail->next=NULL;
        free(temp);
    }
}

void insert_beg()
{
    struct node *temp=new node;
    int d;
    if (temp==NULL)
    {
        cout<<"Memory not allocated."<<endl;
    }
    else
    {
        cout<<"Enter the data: "<<endl;
        cin>>d;
        temp->data=d;
        temp->next=temp->pre=NULL;
        if(head==NULL)
        {
            head=tail=temp;
        }
        else
        {
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
    }
}

void delet_beg()
{
    if(head==NULL)
    {
        cout<<"\nUnderflow"<<endl;
    }
    else if(head->next==NULL)
    {
        head=tail=NULL;
        free(head);
        free(tail);
    }
    else
    {
        struct node *temp=head->next;
        temp->pre=NULL;
        free(head);
        head=temp;
    }

}

void insert_at()
{
    int n;
    cout<<"\nEnter the position at which you want to enter the data: "<<endl;
    cin>>n;
    struct node *ptr=head,*preptr;
    int pos=1;
    while(ptr->next!=NULL)
    {
        if(n==1)
        {
            insert_beg();
            break;
        }
        else if(pos==n)
        {
            struct node *temp=new node;
            cout<<"\nEnter the data: ";
            cin>>temp->data;
            temp->next=ptr;
            ptr->pre=temp;
            preptr->next=temp;
            temp->pre=preptr;
        }
        pos++;
        preptr=ptr;
        ptr=ptr->next;
    }
    if(n>pos)
    {
        cout<<"\nPosition is higher than count of data nodes."<<endl;
    }
}

void delet_at()
{
    int n;
    cout<<"\nEnter the position at which you want to delete: "<<endl;
    cin>>n;
    struct node *ptr=head,*preptr;
    int pos=1;
    while(ptr!=NULL)
    {
        if(pos==n && ptr==head && head->next==NULL)
        {
            delet_beg();
            break;
        }
        else if(pos==n && ptr==head)
        {
            head=ptr->next;
            head->pre=NULL;
            delete(ptr);
            break;
        }

        else if(pos==n && ptr==tail)
        {

            preptr->next=NULL;
            free(tail);
            tail=preptr;
            break;
        }
        else if(pos==n)
        {
            struct node *x=ptr->next;
            preptr->next=x;
            x->pre=preptr;
            free(ptr);
            break;
        }
        pos++;
        preptr=ptr;
        ptr=ptr->next;
    }
    if(n>pos)
    {
        cout<<"\nPosition is higher than count of data nodes."<<endl;
    }
}

void insertAfter_data()
{
    int d;
    cout<<"\nEnter the data after which you want to add: "<<endl;
    cin>>d;
    struct node *ptr=head,*preptr,*postptr=ptr->next;
    int pos=1;
    while(ptr!=NULL)
    {
        if(ptr->data==d && ptr==tail)
        {
            insert_end();
            break;
        }
        else if(ptr->data==d)
        {
            struct node *temp=new node;
            cout<<"\nEnter the data you want to add: ";
            cin>>temp->data;
            ptr->next=temp;
            temp->pre=ptr;
            temp->next=ptr->next;
        }
        pos++;
        preptr=ptr;
        ptr=ptr->next;
    }
    /*if(n>pos)
    {
        cout<<"\nPosition is higher than count of data nodes."<<endl;
    }*/
}

void deleteAt_data()
{
    int d;
    cout<<"\nEnter the data which you want to delete: "<<endl;
    cin>>d;
    struct node *ptr=head,*preptr;
    int pos=1;
    while(ptr!=NULL)
    {
        if(ptr->data==d && pos==1)
        {
            head=ptr->next;
            delete(ptr);
            break;
        }
        else if(ptr->data==d)
        {
            struct node *x=ptr->next;
            preptr->next=x;
            x->pre=preptr;
            free(ptr);
            break;
        }
        else if(ptr->data==d && ptr==tail)
        {
            preptr->next=NULL;
            free(ptr);
            tail=preptr;
            break;
        }
        pos++;
        preptr=ptr;
        ptr=ptr->next;
    }
    if(d>pos)
    {
        cout<<"\nPosition is higher than count of data nodes."<<endl;
    }
}

void Count()
{
    struct node *temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    cout<<"\n No.of nodes is: "<<cnt<<endl;
}


int main()
{
    int e,b,ch,r,f;
    char c;
    //cout<<"Do you want to continue(Y/N): ";
    //cin>>c;
    while(1)
    {
    cout<<"\n******MAIN MENU*****"<<endl;
    cout<<"1.Insert at end."<<endl;
    cout<<"2.Delete at end."<<endl;
    cout<<"3.Insert at begining."<<endl;
    cout<<"4.Delete at begining."<<endl;
    cout<<"5.Insert at given position."<<endl;
    cout<<"6.Delete at given position."<<endl;
    cout<<"7.Insert after given data."<<endl;
    cout<<"8.Delete by given data."<<endl;
    cout<<"9.Count of Nodes. "<<endl;
    cout<<"10.Reverse display of the list. "<<endl;
    cout<<"11.Exit. "<<endl;
    cout<<"Enter your choice."<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\nEnter the no of elements to insert at end: ";
            cin>>e;
            for(int i=1;i<=e;i++)
            {
                insert_end();
            }
            display();
            break;
        case 2:
            cout<<"\nEnter the no of elements to delete from end: ";
            cin>>r;
            for(int i=1;i<=r;i++)
            {
                delet_end();
            }
            display();
            break;
        case 3:
              cout<<"\nEnter the no of elements to insert at begining: ";
              cin>>b;
              for(int i=1;i<=b;i++)
              {
                insert_beg();
              }
              display();
              break;
        case 4:
            cout<<"\nEnter the no of elements to delete from begining: ";
            cin>>f;
            for(int i=1;i<=f;i++)
            {
                delet_beg();
            }
            display();
            break;
        case 5:
            insert_at();
            display();
            break;
        case 6:
            delet_at();
            display();
            break;
        case 7:
            insertAfter_data();
            display();
            break;
        case 8:
            deleteAt_data();
            display();
            break;
        case 9:
            Count();
            break;
        case 10:
            revDisplay();
            break;
        case 11:
            exit(0);
    }
    }
	return 0;
}

