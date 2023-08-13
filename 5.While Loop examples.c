#include<stdio.h>
int main()
/* 1.to count the number of digits in the number
{
    int n,cnt=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("%d",cnt);
    return 0;
}
*/


/*2.sumof the digits of the number
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
*/



/*3.print digits of the number
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d\n",r);
        n=n/10;
    }

    return 0;
}
*/


/*4.reverse the number.
{
    int n,rev=0,R;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        R=n%10;
        rev=rev*10+R;
        n=n/10;
    }
    printf("%d\n",rev);

    return 0;
}
*/



/*5.find if a number is palindrome.
{
    int n,rev=0,R;
    printf("Enter a number:");
    scanf("%d",&n);
    int org=n;
    while(n>0)
    {
        R=n%10;
        rev=rev*10+R;
        n=n/10;
    }
    if(rev==org)
    {
        printf("%d is a palindrome number.",org);
    }
    else
    {
        printf("%d is a not a palindrome number.",org);
    }

    return 0;
}
*/







