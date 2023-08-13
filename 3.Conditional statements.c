
#include<stdio.h>
int main()
/* else if ladder example1
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if (marks>=0 && marks<=39)
    {
        printf("Fail.");
    }
    else if(marks>=40 && marks<=59)
    {
        printf("C grade");
    }
    else if(marks>=60 && marks<=79)
    {
        printf("B grade");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("A grade");
    }
    else
    {
        printf("Invalid");
    }
    return 0;

}
*/






/* positive and negative identification
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    if(a<0)
    {
        printf("\nNumber is negative.");
    }
    else if(a>0)
    {
        printf("\nNumber is positive.");
    }
    else
    {
        printf("\nNumber is zero.");
    }
    return 0;
}
*/


/* vowels and consonents.
{
    char x;
    printf("Enter a character from alphabets:");
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("The character is a vowel.");
    }
    else
    {
        printf("The character is a consonant.");
    }
    return 0;
}

*/


/*
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    {
        printf("The character is a lower case alphabet.");
    }
    else if(x>='A'&&x<='Z')
    {
        printf("The character is an upper case alphabet.");
    }
    else if(x>='0'&&x<='9')
    {
        printf("The character is a digit.");
    }
    else if(x>=' '&&x<='/')
    {
        printf("The character is a special symbol.");
    }
    else if(x>='['&&x<='`')
    {
        printf("The character is a special symbol.");
    }
    else if(x>='{'&&x<='~')
    {
        printf("The character is a special symbol.");
    }
    else if(x>=':'&&x<='@')
    {
        printf("The character is a special symbol.");
    }
    return 0;
}
*/

/* nested if example
{
    int mk;
    printf("Enter the marks:");
    scanf("%d",&mk);
    if (mk>=40&&mk<=100)
    {
        if(mk<=59)
        {
            printf("C Grade.");
        }
        else if(mk<=79)
        {
            printf("B Grade.");
        }
        else
        {
            printf("A Grade.");
        }
    }
    else if(mk>=0&&mk<=39)
    {
        printf("Fail.");
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}
*/


{
    char gender;
    printf("Enter your gender:");
    scanf("%c",&gender);
    if (gender=='M'||gender=='m')
    {
        int age;
        printf("Enter your age:");
        scanf("%d",&age);
        if(age>=16&&age<=25)
        {
            printf("You are selected.");
        }
        else
        {
            printf("You are rejected due to the age criteria.");
        }
    }
    else
    {
        printf("Your are rejected due to the gender criteria.");
    }
    return 0;
}











