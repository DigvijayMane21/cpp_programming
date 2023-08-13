#include<stdio.h>
int greatest(int x,int y,int z)
{
    if(x>y && x>z)
    {
        great=x;
        printf("\n%d is greatest",x);
    }
    else if(y>x && y>z)
    {
        great=y;
        printf("\n%d is greatest",y);
    }
    else
    {
        great=z;
        printf("\n%d is greatest",z);
    }
    return ;
}
int smallest(int x,int y,int z)
{
    if(x<y && x<z)
    {
        small=x;
        printf("\n%d is smallest",x);
    }
    else if(y<x && y<z)
    {
        small=y
        printf("\n%d is smallest",y);
    }
    else
    {
        small=z;
        printf("\n%d is smallest",z);
    }
    return ;
}
int sum(int x,int y,int z)
{
    //int p=greatest(x,y,z);
    //int q=smallest(x,y,z);
    int print(print(greatest)+print(smallest));
    printf("\nSum =%d",add);
}
int main()
{
    int x,y,z;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    greatest(x,y,z);
    smallest(x,y,z);
    sum(x,y,z);
    return 0;
}
