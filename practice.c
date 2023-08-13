#include<stdio.h>
int main()
/* to find prime numbers from the given range
{
    int l,u,k=0;
    printf("Enter a lower range:");
    scanf("%d",&l);
   printf("Enter a upper range:");
   scanf("%d",&u);


    for(int n=l;n<=u;n++)
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
           if(n==1)
           {
               printf("The %d number is neither prime nor composite.\n",n);
               break;
           }
           else if(n%i==0)
           {
               cnt++;
           }
        }
        if(cnt==2)
        {
            printf("%d ",n);
            k++;
        }
    }
    printf("\nCount of prime numbers in the given range=%d",k);
    return 0;
}
*/


{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest number.",a);
        }
        else
        {
            printf("%d is the greatest number.",c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is the greatest number.",b);
        }
        else
        {
            printf("%d is the greatest number.",c);
        }
    }
    return 0;
}
