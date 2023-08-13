#include<stdio.h>
int main()
{
    int n;char ch;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        printf("\nSquare of %d is: %d\n",n,n*n);
        printf("Want to repeat (Y/N):");
        scanf(" %c",&ch);
    }
    while(ch=='y'||ch=='Y');
    return 0;
}
