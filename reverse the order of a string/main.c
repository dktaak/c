#include <stdio.h>
#include <stdlib.h>
char* mystrchr(const char*,char);
void mystrrev_1(char*,char *);
void mystrrev(char*);
int main()
{
char s[20],*p,*q;
    printf("Enter String\n");
    scanf("%[^\n]",s);
    mystrrev(s);

    q=p=s;
    while(p=mystrchr(q,' '))
    {
    mystrrev_1(q,p-1);
    q=p+1;
    }
    mystrrev(q);
    printf("%s\n",s);

    return 0;
}
void mystrrev_1(char* s1,char *s2)
{
    char temp;
    while(s1<s2)
    {
        temp=*s1;
        *s1=*s2;
        *s2=temp;
        s1++;
        s2--;
    }
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
char * mystrchr(const char*s,char ch)
{
    while(*s)
    {
        if(ch==*s)
            return s;
        s++;
    }
    return 0;
}

