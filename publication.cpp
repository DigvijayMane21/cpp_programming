#include<iostream>
#include<string>
using namespace std;

class Publication
{
private:
    string title;
    float price;

public:
    void add()
    {
        cout<<"Enter Publiction Info.\n";
        cout<<"Enter title: \n";
        cin>>title;
        cout<<"Enter price: \n";
        cin>>price;
    }
    void display()
    {
        cout<<"Title of Publication is: "<<title<<endl;
        cout<<"Price of the item is: "<<price<<endl;
    }
};

class Book:public Publication
{
private:
    int pageno;
public:
    void add_book()
    {
        try
        {
            add();
            cout<<"Enter no of pages: ";
            cin>>pageno;
            cout<<endl;
            if(pageno<=0)
            {
                throw pageno;
            }
        }
        catch(...)
        {
            cout<<"Invalid no of pages.\n";
            pageno=0;
        }
    }
    void display_book()
    {
        display();
        cout<<"Number of pages: "<<pageno<<endl;
    }
};


class Tape:public Publication
{
private:
    int time;
public:
    void add_tape()
    {
        try
        {
            add();
            cout<<"Enter run time: \n";
            cin>>time;
            if(time<=0)
            {
                throw time;
            }
        }
        catch(...)
        {
            cout<<"Invalid run time.\n";
            time=0;
        }
    }
    void display_tape()
    {
        display();
        cout<<"Run Time: "<<time<<endl;
    }
};


int main()
{
    Book b[10];Tape t[10];
    int b_cnt=0,t_cnt=0,ch;
    do
    {
        cout<<"\nPublication Database.\n";
        cout<<"1.Add book.\n2.Add tape.\n3.Display book database.\n4.Display tape database.\n5.Exit\n";
        cout<<"Enter your choice: \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            b[b_cnt].add_book();
            b_cnt++;
            break;
        case 2:
            t[t_cnt].add_tape();
            t_cnt++;
            break;
        case 3:
            cout<<"\nBook Database.\n";
            for(int i=0;i<b_cnt;i++)
            {
                b[i].display_book();
            }
            break;
        case 4:
            cout<<"\nTape Database.\n";
            for(int i=0;i<t_cnt;i++)
            {
                t[i].display_tape();
            }
            break;
        case 5:
            exit(0);
            break;
        }
    }while(ch!=5);
    return 0;
}
