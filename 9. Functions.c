#include<stdio.h>
/*
void display();
int main()
{
    printf("Main starts.\n");
    display();
    printf("Main ends.");
    return 0;
}
void display()
{
    printf("Display function.\n");
    return;
}
*/


/*
void display()
{
    printf("Display function.\n");
    return;
}
int main()
{
    printf("Main starts.\n");
    display();
    printf("Main ends.");
    return 0;
}
*/


/* function calling method 1
int sum(int x,int y);
int main()
{
    int ans=sum(10,20);
    printf("Addition is %d",ans);
    return 0;
}
int sum(int x,int y)
{
    int z=x+y;
    return z;
}
*/


void sum(int x,int y);
int main()
{
    sum(10,20);
    return 0;
}
void sum(int x,int y)
{
    printf("Addition is %d.",x+y);
    return;
}
