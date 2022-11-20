/*SRAVYA.M
BALLARI INSTITUTE OF TECHNOLOGY AND MANAGEMENT
COMPUTER SCIENCE AND ENGINEERING*/

#include<stdio.h>
#include<string.h>
void main()
{
    int i,len;
    char str[10];
    printf("enter a string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str[i]=toupper(str[i]);
    }
    for(i=0;i<len;i++)//1st loop
    {
        if(str[i]=='S'||str[i]=='R'||str[i]=='A'||str[i]=='A1')
        printf("     *****");
            if(str[i]=='V')
               printf("     *   *");

    if(str[i]=='Y')

            printf("     *   *");

    }
    printf("\n");
    for(i=0;i<len;i++)//2nd loop
    {
        if(str[i]=='S')
        printf("     *    ");
            if(str[i]=='R'||str[i]=='A'||str[i]=='V'||str[i]=='Y'||str[i]=='A1')
               printf("     *   *");
    }
    printf("\n");
    for(i=0;i<len;i++)//3rd loop
    {
        if(str[i]=='R'||str[i]=='A'||str[i]=='V'||str[i]=='A1')
        printf("     *   *");
            if(str[i]=='S')
               printf("     *    ");

    if(str[i]=='Y')

            printf("      * * ");

    }
    printf("\n");
    for(i=0;i<len;i++)//4th loop
    {
        if(str[i]=='S'||str[i]=='A'||str[i]=='A1')
        printf("     *****");
            if(str[i]=='R')
               printf("     **** ");

    if(str[i]=='Y')

            printf("       *  ");
 if(str[i]=='V')

        printf("     *   *");
    }
    printf("\n");

for(i=0;i<len;i++)//5th loop
    {
        if(str[i]=='S')
        printf("         *");
            if(str[i]=='A'||str[i]=='V'||str[i]=='A1')
               printf("     *   *");

    if(str[i]=='Y')

            printf("       *  ");
    if(str[i]=='R')

            printf("     **   ");


    }
    printf("\n");

for(i=0;i<len;i++)//6th loop
    {
        if(str[i]=='A'||str[i]=='A1')
        printf("     *   *");
            if(str[i]=='S')
               printf("         *");

    if(str[i]=='V')

            printf("      * * ");
    if(str[i]=='R')

            printf("     * *  ");
            if(str[i]=='Y')

            printf("       *  ");

    }
    printf("\n");

for(i=0;i<len;i++)//7th loop
    {
        if(str[i]=='R'||str[i]=='A'||str[i]=='A1')
        printf("     *   *");
            if(str[i]=='S')
               printf("     *****");

    if(str[i]=='V')

            printf("       *  ");
    if(str[i]=='Y')
           printf("       *  ");

    }
    printf("\n");
}
