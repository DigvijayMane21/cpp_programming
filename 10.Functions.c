#include<stdio.h>
/* printing the reverse of given numbers
int rev(int n)
{
    int r=0,R,t=n;

    while(n>0)
    {
        R=n%10;
        r=r*10+R;
        n=n/10;
    }
    printf("Reverse of the number %d is: %d.\n",t,r);
    return r;
}
int main()
{
    rev(231);
    rev(654);
    rev(1497);
    return 0;
}
*/


/* priting reverse of all the numbers in a given range.
int rev(int n)
{
    int r=0,R,t=n;

    while(n>0)
    {
        R=n%10;
        r=r*10+R;
        n=n/10;
    }
    printf("Reverse of the number %d is: %d.\n",t,r);
    return r;
}
int main()
{
    int l,u;
    printf("Enter a lower limit:");
    scanf("%d",&l);
    printf("Enter a upper limit:");
    scanf("%d",&u);
    for(int n=l;n<=u;n++)
    {
        rev(n);
    }
    return 0;
}
*/


/* factorial of given number.
int fact(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int t=n;
    int ans=fact(n);
    printf("Factorial of %d is %d.\n",t,ans);
    return 0;
}
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}
*/



/* Limitation of call by value method:
   swaping is not possiblewith call by value method.

void swap(int x,int y);
int main()
{
    int x=10,y=20;
    swap(x,y);
    printf("x=%d,y=%d",x,y);
    return 0;
}
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
    return;
}
*/



/*
call by refrence method:
it overcomes the limitations of the previous method.
void swap(int *p,int *q);
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    printf("x=%d,y=%d",x,y);
    return 0;
}
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
    return;
}
*/
