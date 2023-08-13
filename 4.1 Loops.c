#include<stdio.h>
int main()
/* Printing count of the factors of the number
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    printf("No of factors = %d",cnt);
    return 0;
}
*/




{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i=0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is composite.");
    }
    return 0;
}


/* sum of factors
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
*/



/*  perfect number
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("The number is perfect number.");
    }
    else
    {
        printf("The number is not a perfect number.");
    }
    return 0;
}
*/



// WHILE LOOPS


/* printing numbers in asending order
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/



/* printing numbers in desending order
{
    int i=10;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
*/


/* finding factors of the number
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
*/

/*
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
*/








