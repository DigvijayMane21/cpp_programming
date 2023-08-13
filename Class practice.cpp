#include<iostream>
using namespace std;
class Book
{
private:
    int price,pageNo;
    string book_name,author;

public:
    Book()
    {

    }
    Book(int pr,int pgno,string bknm,string athr)
    {
        price=pr;
        pageNo=pgno;
        book_name=bknm;
        author=athr;
    }

    int getPrice()
    {
        return price;
    }
    int getPageNo()
    {
        return pageNo;
    }
    string getBook_Name()
    {
        return book_name;
    }
    string getAuthor()
    {
        return author;
    }
};

void Display(Book bk[],int n)
{
    cout<<"Book_Name\tAuthor\tPage_No\t\tPrice"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<bk[i].getBook_Name()<<"  \t\t"<<bk[i].getAuthor()<<" \t"<<bk[i].getPageNo()<<"\t \t"<<bk[i].getPrice()<<endl;
    }

}

void requiredBook(Book bk[],int n)
{
    cout<<"Book_Name\tAuthor\tPage_No\t\tPrice"<<endl;
    for(int i=0;i<n;i++)
    {
        if(bk[i].getPrice()>500)
        {
            cout<<bk[i].getBook_Name()<<"  \t\t"<<bk[i].getAuthor()<<" \t"<<bk[i].getPageNo()<<"\t \t"<<bk[i].getPrice()<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter number of book records: "<<endl;
    cin>>n;
    Book bk[n];
    int pr;int pgno;string bknm;string athr;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name of Book: "<<endl;
        cin>>bknm;
        cout<<"Enter Name of Author: " <<endl;
        cin>>athr;
        cout<<"Enter Number of pages: "<<endl;
        cin>>pgno;
        cout<<"Enter Price: "<<endl;
        cin>>pr;
        bk[i]=Book(pr,pgno,bknm,athr);
    }
    cout<<"Initial Book Record."<<endl<<"****************************************************************************"<<endl;
    Display(bk,n);
    cout<<"Required Book Record."<<endl<<"****************************************************************************"<<endl;
    requiredBook(bk,n);

    return 0;

}
