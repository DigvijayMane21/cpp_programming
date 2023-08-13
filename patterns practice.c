#include<stdio.h>
int main()
/* C outside the box pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || i==1 || i==n || j==3&&i>=3&&i<=n-2 || j==n-2&&i>=3&&i<=n-2 || i==3&&j>=3&&j<=n-2 || i==n-2&&j>=3&&j<=n-2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}
*/


/*
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}
*/



/*
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i)
            {
                printf("1 ");
            }
            else if(j<i)
            {
                printf("0 ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}
*/


/* numric triangular pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int z=1;
        for(int j=1;j<=n-i;j++)
        {
           printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
           printf("%d ",z++);
        }
        z=z-2;
        for(int l=1;l<i;l++)
        {
           printf("%d ",z--);
        }
        printf("\n");
    }

    return 0;
}
*/


/* Alphabetical triangular pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char z='A';
        for(int j=1;j<=n-i;j++)
        {
           printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
           printf("%c ",z++);
        }
        z=z-2;
        for(int l=1;l<i;l++)
        {
           printf("%c ",z--);
        }
        printf("\n");
    }

    return 0;
}
*/



// alphanumeric pattern
/*
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char z='A';int y=1;
        for(int j=1;j<=n-i;j++)
        {
           printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
           printf("%d ",y++);
        }
        z=z+y-3;
        for(int l=1;l<i;l++)
        {
           printf("%c ",z--);
        }
        printf("\n");
    }

    return 0;
}
*/

