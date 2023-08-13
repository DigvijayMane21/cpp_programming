#include<stdio.h>
int main()
/* single pointer
{
    int age2=50;
    int age=20;
    int *ptr=&age;

    printf("Address %p\n",ptr);
    printf("Address %p\n",&age);
    printf("Value %d\n",age);
    printf("Value %d",*ptr);
    return 0;
}
*/



/*
{
    int age=20;
    int *ptr=&age;
    int **q=&ptr;

    printf("Address %p\n",ptr);
    printf("Address %p\n",&age);
    printf("Value %d\n",age);
    printf("Value %d\n",*ptr);
    printf("Q: %p\n",q);
    printf("ptr by Q:%p\n",ptr);
    printf("Address of ptr:%p\n",&ptr);
    printf("Age by Q%d\n",**q);
    return 0;
}
*/

/* Addition using pointers
{
    int x=10;
    int y=20;
    int *p=&x;
    int *q=&y;
    int add=(*p)+(*q);

    printf("Addition is %d.",add);

    return 0;
}
*/



/* array printing using pointer
{
    int arr[]={10,20,30,40,50};
    int *p=&arr[0];
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
*/
