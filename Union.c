#include<stdio.h>
union Student
{
    int rollNo;
    char gender;
    float marks;
};
int main()
{
    union Student st;
    st.rollNo=94;
    st.gender='M';
    st.marks=86.978;
    printf("%d\n",st.rollNo);
    printf("%c\n",st.gender);
    printf("%f\n",st.marks);
    return 0;
}
