#include<stdio.h>
int main()
/* right triangular pattern of numbers
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d%d ",i,j);
            if(j==i)
            {
                break;
            }

        }
        printf("\n");
    }
    return 0;
}
*/


/* similar patternasabove
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d%d ",i,j);
        }
        printf("\n");
    }
    return 0;
}
*/

/* inverted right triangular pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/


/* mirror image of the previous pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=n-i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/



/* mirror image of the first pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/


/* inverted triangular pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/


/* upright triangular pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
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
            if(j==1)
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
            if(j==1 || j==n || i==1 || i==n)
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


/* N Pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || j==i)
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



/* Z Pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || i+j==n+1  )
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




/* box with X in it pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || i+j==n+1 || j==i || j==1 || j==n  )
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


/* M Pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i+j==n+1&&i<=n/2+1 || j==i&&i<=n/2+1  )
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


/* W Pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i+j==n+1&&i>=n/2+1 || j==i&&i>=n/2+1)
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


/* reverse sigma pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || i+j==n+1&&i<=n/2+1 || j==i&&i>=n/2+1)
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


/* sigma pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || i+j==n+1&&i>=n/2+1 || j==i&&i<=n/2+1 )
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



/* C inside box pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n || i==3&&j<=n-2&&j>=3 || j==3&&i<=n-2&&i>=3 || i==n-2&&j<=n-2&&j>=3  )
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


/* X Pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==n+1 || j==i)
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


/* inverted hollow triangle pattern
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i+j==n+1&&i<=n/2+1 || j==i&&i<=n/2+1  )
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


{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n || i+j==n+1  )
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
