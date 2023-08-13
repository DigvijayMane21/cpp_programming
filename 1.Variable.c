#include<stdio.h>
int main()
{
    //int age=20;
    //printf("%d",age);
    //printf("My age is %d",age);
    //printf("%d is my age",age);

    //int age;
    //printf("Enter your age:");
    //scanf("%d",&age);

    /*int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Addition of %d and %d is %d.",x,y,x+y);
    return 0;*/


    char name[20]; char gender;
    int age; float marks;
    double percentile;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your gender:");
    scanf(" %c",&gender);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your marks:");
    scanf("%f",&marks);
    printf("Enter your percentile:");
    scanf("%lf",&percentile);


    printf("Name :%s\n",name);
    printf("Gender :%c\n",gender);
    printf("Age :%d\n",age);
    printf("Marks :%f\n",marks);
    printf("Percentile :%lf",percentile);
    return 0;
}
