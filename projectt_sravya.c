/*SRAVYA.M
COLLEGE:BALLARI INSTITUTE OF TECHNOLOGY AND MANAGEMENT
BRANCH:COMPUTER SCIENCE AND ENGINEERING*/
#include <stdio.h>
#include <stdlib.h>
int printS[7][5];
int printR[7][5];
int printA[7][5];
int printV[7][5];
int printY[7][5];
int printA1[7][5];
  void gap()
  {

      for( int i=0;i<7;i++)
      {
          for( int j=0;j<1;j++)
  {
    printf("  ");

          }
      }
  }
void printConsole()
{

    for(int i=0;i<7;i++)
    {
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printS[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printR[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printA[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printV[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printY[i][j];
            printf("%c",ch);
        }
        gap();
        for(int j=0;j<5;j++)
        {
            char ch=printA[i][j];
            printf("%c",ch);
        }

         printf("\n");
    }
}
void S()
{
    for(int i=0;i<7;i++)
    {

    for( int j=0;j<5;j++)
    {
        if(i==0||i==1&&j==0||i==2&&j==0||i==3||i==4&&j==4||i==5&&j==4||i==6)
    {
        printS[i][j]=42;
    }
    else
        {
        printS[i][j]=32;
        }
    }
    }
}

    void R()

{
    for(int i=0;i<7;i++)
    {

    for( int j=0;j<5;j++)
    {
        if(i==0&&j!=4||i==1&&j!=1&&j!=2&&j!=3||i==2&&j!=1&&j!=2&&j!=3||i==3&&j!=1&&j!=4||i==4&&j!=1&&j!=2&&j!=3&&j!=4||i==4&&j!=1&&j!=2&&j!=3||i==4&&j!=1&&j!=2&&j!=3||i==4&&j!=1&&j!=2&&j!=3||i==5&&j!=1&&j!=2&&j!=3||i==6&&j!=1&&j!=2&&j!=3)
    {
        printR[i][j]=42;
    }
    else
        {
        printR[i][j]=32;
        }
    }
    }
}
    void A()
{
    for(int i=0;i<7;i++)
    {

    for( int j=0;j<5;j++)
    {
        if(i==0||i==1&&j!=1&&j!=2&&j!=3||i==2&&j!=1&&j!=2&&j!=3||i==3||i==4&&j!=1&&j!=2&&j!=3||i==5&&j!=1&&j!=2&&j!=3||i==6&&j!=1&&j!=2&&j!=3)
    {
        printA[i][j]=42;
    }
    else
        {
        printA[i][j]=32;
        }
    }
    }
}
     void V()
{
    for(int i=0;i<7;i++)
    {

    for( int j=0;j<5;j++)
    {
        if(i==0&&j!=1&&j!=2&&j!=3||i==1&&j!=1&&j!=2&&j!=3||i==2&&j!=1&&j!=2&&j!=3||i==3&&j!=1&&j!=2&&j!=3||i==4&&j!=1&&j!=2&&j!=3||i==5&&j!=0&&j!=2&&j!=4||i==6&&j!=0&&j!=1&&j!=3&&j!=4)
    {
        printV[i][j]=42;
    }

    else
        {
        printV[i][j]=32;
        }
    }
}
}
         void Y()
{
    for(int i=0;i<7;i++)
    {

    for(int j=0;j<5;j++)
    {
        if(i==0&&j!=1&&j!=2&&j!=3||i==1&&j!=1&&j!=2&&j!=3||i==2&&j!=0&&j!=2&&j!=4||i==3&&j!=0&&j!=1&&j!=3&&j!=4||i==4&&j!=0&&j!=1&&j!=3&&j!=4||i==5&&j!=0&&j!=1&&j!=3&&j!=4||i==4&&j!=0&&j!=1&&j!=3&&j!=4||i==5&&j!=0&&j!=1&&j!=3&&j!=4||i==6&&j!=0&&j!=1&&j!=3&&j!=4)
    {
        printY[i][j]=42;
    }
    else
        {
        printY[i][j]=32;
        }
    }
    }
}

       void A1()
{
    for(int i=0;i<7;i++)
    {

    for(int j=0;j<5;j++)
    {
        if(((i==0||j==4&&i!=0))||((i==0||i==3)&&(j>0&&j<4)))
    {
        printA1[i][j]=42;
    }
    else
        {
        printA1[i][j]=32;
        }
    }
    }
}
void main()
{

   S();
   R();
   A();
   V();
   Y();
   A();
   printConsole();
}
