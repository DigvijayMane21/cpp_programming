#include<stdio.h>
/*
struct Student
{
    int rollno;
    char gender;
    float marks;
};

int main()
{
    struct Student st;
    st.rollno=49;
    st.gender='M';
    st.marks=98.08;
    printf("Roll No:%d\n",st.rollno);
    printf("Gender:%c\n",st.gender);
    printf("Marks:%f\n",st.marks);

    return 0;

}
*/

/*
struct Book
{
    int pageNo;
    char name[20];
    float price;
};

int main()
{
    struct Book bk;
    bk.pageNo;
    bk.name;
    bk.price;
    printf("Number of pages:\n");
    scanf("%d",&bk.pageNo);
    printf("Name of Book:\n");
    scanf("%s",bk.name);
    printf("Price of the Book:\n");
    scanf("%f",&bk.price);
    printf("Number of pages: %d\n",bk.pageNo);
    printf("Name of the Book: %s\n",bk.name);
    printf("Price of the book: %f\n",bk.price);

    return 0;


    return 0;

}
*/




/*
struct Car
{
    int id;
    char name[20];
    float milage;
};
int main()
{
    int n=3;
    struct Car cr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter id:\n");
        scanf("%d",&cr[i].id);
        printf("Enter Car name:\n");
        scanf("%s",cr[i].name);
        printf("Enter milage:\n");
        scanf("%f",&cr[i].milage);
    }
    printf("\nId\tName\tMilage\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%f\n",cr[i].id,cr[i].name,cr[i].milage);
    }
    return 0;
}
*/



/* Printing data of max markscorer.
struct Student
{
    int rollNo;
    char name[20];
    float marks;
};
int main()
{
    int n=3;
    struct Student st[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&st[i].rollNo);
        printf("Enter name:");
        scanf("%s",st[i].name);
        printf("Enter marks:");
        scanf("%f",&st[i].marks);
    }

    struct Student temp=st[0];
    for(int i=0;i<n;i++)
    {
        if(st[i].marks>temp.marks)
        {
            temp=st[i];
        }
    }
    printf("\n\nRollNo\tName\tMarks");
    printf("\n\%d\t%s\t%f",temp.rollNo,temp.name,temp.marks);
    return 0;
}
*/



struct Student
{
    int rollNo;
    char name[20];
    float marks;
};
int main()
{
    int n=3;
    struct Student st[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&st[i].rollNo);
        printf("Enter name:");
        scanf("%s",st[i].name);
        printf("Enter marks:");
        scanf("%f",&st[i].marks);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(st[i].rollNo>st[j].rollNo)
            {
                struct Student temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
    printf("\nRollNo\tName\tMarks");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t%s\t%f",st[i].rollNo,st[i].name,st[i].marks);
    }
    return 0;
}
