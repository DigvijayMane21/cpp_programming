#include<stdio.h>
int main()
/* 2D  array declaration
{
    int n=2;
    int arr[n][n];
    printf("Enter %d elements.\n",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


/* 2D  2X3 array
{
    int n=3,m=2;

    int arr[n][m];
    printf("Enter %d elements.\n",n*m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


/* sum of the matrix elements
{
    int n=3,m=2,sum=0;

    int arr[n][m];
    printf("Enter %d elements.\n",n*m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("\nSum of the matrix elements is %d.",sum);
    return 0;
}
*/



{
    int n=3,m=2,sum1=0,sum2=0;

    int arr1[n][m];int arr2[m][n];
    printf("Enter %d elements for 1st matrix.\n",n*m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr1[i][j]);
            sum1=sum1+arr1[i][j];
        }
        printf("\n");
    }
    printf("\nSum of the 1st matrix is %d.",sum1);

    printf("\nEnter %d elements for 2nd matrix.\n",n*m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr2[i][j]);
            sum2=sum2+arr2[i][j];
        }
        printf("\n");
    }
    printf("\nSum of the 2nd matrix is %d.",sum2);
    printf("\nSum of both matrices is %d.",sum1+sum2);
    return 0;
}
