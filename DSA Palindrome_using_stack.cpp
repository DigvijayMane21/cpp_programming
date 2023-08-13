#include<iostream>
#define maxSize 10

 using namespace std;
 int indx= -1;
 char arr[maxSize+1];

 void push(char k)
 {
     if(indx==maxSize)
     {
         cout<<"Overflow."<<endl;
     }
     else
     {
         arr[++indx]=k;
     }
 }

 char pop()
 {
     if(indx==-1)
     {
         cout<<"Underflow."<<endl;
     }
     else
     {
         char k=arr[indx];
         indx--;
         return k;
     }
     return '1';
 }

 int main()
 {
     string input;
     cout<<"Enter a string: "<<endl;
     getline(cin,input);
     int b=0;

     for(int i=0;i<input.length();i++)
     {
         char k=input[i];
         push(k);
     }
     for(int i=0;i<input.length();i++)
     {
         char k=input[i];
         if(k!=pop())
         {
             cout<<"Not Palindrome."<<endl;
             b=1;
             break;
         }
     }
     if(b==0)
     {
         cout<<"Palindrome."<<endl;
     }
     return 0;
 }
