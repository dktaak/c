#include <stdio.h>
#include <stdlib.h>
void mystrcpy(char*,const char*);
int mystrlen(char *);
void mystrrev(char*);
int main()
{
    int i;
    char* s[20];char f[10];
   printf("Enter String s\n");
   scanf("%s",s);
   mystrrev(s);
   printf("Reverse String is = %s\n",s);


    return 0;
}
void mystrrev(char*s)
{
    int i=0,j;
    char temp;
    j=mystrlen(s)-1;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;j--;
    }
    return 0;
}
int mystrlen(char *s)
{
    int len=0;
    while(*s++)
        len++;
    return len;
}
void mystrcpy(char*s1,const char*s2)
{
    int i;
    for(i=0;s1[i];i++);//find length of a string one
    while(*s2)
        s1[i++]=*s2++;
    s1[i]=*s2;//copy \0
    return 0;
}
