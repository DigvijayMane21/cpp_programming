#include<iostream>
using namespace std;
#define size 5
class JobQue
{
private:
    struct queue
    {
        int que[size];
        int front,rear;

    }Q;
public:
    JobQue();   //constructor
    int Qfull();
    int insert(int);
    int Qempty();
    int delet();
    void display();

};

JobQue::JobQue()  //Initilizing the job queue
{
    Q.front=-1;  //-1 indicates it is empty
    Q.rear=-1;

}

int JobQue::Qfull()
{
   if(Q.rear>=size-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

//The insert function

int JobQue::insert(int item)
{
    if(Q.front==-1)
        Q.front++;
    Q.que[++Q.rear]==item;
    return Q.rear;

}

int JobQue::Qempty()
{
    if((Q.front==-1)||(Q.front>Q.rear))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// The delet function

int JobQue::delet()
{
    int item;
    item=Q.que[Q.front];
    Q.front++;
    cout<<"\n The deleted job is: "<<item;
    return Q.front;

}

//The display function

void JobQue::display()
{
    int i;
    for(i=Q.front;i<=Q.rear;i++)
    {
        cout<<" "<<Q.que[i];

    }
}

int main()
{
    int choice,item;
    char ans;
    JobQue obj;
    do
    {
        cout<<"\n Main menu";
        cout<<"\n1.Add Job\n2.Delet Job\n3.Display Job Queue";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                if(obj.Qfull())
                {
                    cout<<"\ncannot insert the job";
                }
                else
                {
                    cout<<"\nEnter the job number: ";
                    cin>>item;
                    obj.insert(item);
                }
                break;

            case 2:
                if(obj.Qempty())
                {
                    cout<<"\nQueue underflow.";
                }
                else
                {
                    obj.delet();
                }
                break;

            case 3:
                if(obj.Qempty())
                {
                    cout<<"\nJob queue is empty.";

                }
                else
                {
                    obj.display();
                }
                break;
            default:
                cout<<"\n Wrong choice>";
                break;

        }
        cout<<"\n Do you want to continue?:";
        cin>>ans;
    }
    while(ans=='Y'|| ans=='y');
    return 0;
}
