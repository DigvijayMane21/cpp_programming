// Encapsulation is a way of binding data member and member function together.
//OR
// Encapsulation is a process of making the data  member private and giving its access by member function which is public.
//(Member function=getter,setter)


#include<iostream>
using namespace std;
class IOIT
{
private:
    double fees;
    string branch;
public:
    void setFees(double fs)
    {
        this->fees=fs;
    }
    void setBranch(string bh)
    {
        this->branch=bh;
    }
    double getFees()
    {
        return fees;
    }
    string getBranch()
    {
        return branch;
    }
};

int main()
{
    IOIT it;
    double yy;
    cout<<"Enter fees:";
    cin>>yy;
    it.setFees(yy);
    it.setBranch("AI&DS");
    cout<<it.getFees()<<endl;
    cout<<it.getBranch()<<endl;
    return 0;
}
