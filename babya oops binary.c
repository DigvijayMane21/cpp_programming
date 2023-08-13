#include<iostream>
class binary{
public:
    int binary{0};
    void read(){
        cout<<"Enter the binary number :- ";
        cin>>binary;
    }
};

class convertion:public binary{
    int binary_constant{1},number{0};
    public:
    int binary_to_decimal(int binary){
        while{
            if(binary>0){
                number = number + binary_constant*(binary%10);
                binary=binary/10;
            }
            else{
                return number;
            }
        }
    }
};

int main(){
    convertion c;
    c.read();
    cout<<c.binary_to_decimal(c.binary);
}
