#include<stdio.h>

/* string initialisation
int main()
{
    char name[20]={'T','h','e',' ','c','o','d','e'};
    printf("Your name:%s",name);
    return 0;
}
*/


/* string declaration and printing
   with format specifier.
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%[^\n]",name);
    printf("Your name:%s",name);

    return 0;

}
*/

/* string functions
    lenght of the string.
#include<string.h>
int main()
{
    char name[20]="Thecodeculture";
    int len=strlen(name);
    printf("Length:%d",len);
    return 0;
}
*/


/* coping string
#include<string.h>
int main()
{
    char name[20]="Thecodeculture";
    char copy[20];
    strcpy(copy,name);
    printf("Copied:%s",copy);
    return 0;
}
*/



/*  reverse string
#include<string.h>
int main()
{
    char name[20]="Thecodeculture";

    printf("Reverse:%s",strrev(name));
    return 0;
}
*/


/* comparison of strings
#include<string.h>
int main()
{
    char name[20]="Thecodeculture";
    char copy[20];
    strcpy(copy,name);
    printf("Compare:%d",strcmp(name,copy));
    return 0;
}


#include<string.h>
int main()
{
    char name[20]="Thecodeculture";
    char copy[20];
    strcpy(copy,name);
    char surname[10]="Mane";
    printf("Compare:%d",strcmp(name,surname));

    return 0;
}
*/



/*
#include<string.h>
int main()
{
    char name[20]="Thecodeculture";
    //char upper[20]=strupr(name);
    printf("Upper case:%s\n",strupr(name));
    //char lower[20]=strlwr(name);
    printf("Lower case:%s",strlwr(name));

    return 0;
}
*/


/* concatination
#include<string.h>
int main()
{
    char name[20]="The code culture";
    char greet[40]="Good Morning ";
    strcat(greet,name);

    printf("concatinated string:%s",greet);

    return 0;
}
*/

/* lenght of string without using
   library function.
int main()
{
    char name[20]="The code culture";
    int len=0;
    while(name[len]!='\0')
    {
        len++;
    }
    printf("Lenght:%d",len);

    return 0;
}
