#include<stdio.h>
void output(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        printf("The charcter '%c' is a lower case alphabet.\n\n",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("The charcter '%c' is a upper case alphabet.\n\n",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("The charcter '%c' is a digit.\n\n",ch);
    }
    else
    {
        printf("Invalid input.\n");
    }
    return;
}
int main()
{

    char c;
    loop:
    printf("Do you want to continue (Y/N):");
    scanf(" %c",&c);

    switch (c)
    {
        char a;
        case 'Y':
            printf("Enter a character:");
            scanf(" %c",&a);
            output(a);
            goto loop;


        case 'N':
            break;

        default:
            printf("\nInvalid input.\n");
            goto loop;
            break;

    }
    return 0;
}
