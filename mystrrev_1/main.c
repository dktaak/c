#include <stdio.h>
#include <stdlib.h>

void mystrrev_1(char*,char *);
int main()
{
    char s[20];
   printf("Enter String\n");
   scanf("%s",s);
   mystrrev_1(s+2,s+5);
   printf("Reverse between specified positions String is = %s\n",s);
    return 0;
}
void mystrrev_1(char* p,char *q)
{
    char ch;
    /*//using for loop
    int i,j;
    for(i=0;p+i<=q;i++);
    printf("%d\n",i);
    for(i=i-1,j=0;j<i;i--,j++)
    {
        ch=p[i];
        p[i]=p[j];
        p[j]=ch;
    }*/
    //printf("Reverse between specified positions String is = %s\n",p);

    while(p<q)
    {
        ch=*p;
        *p=*q;
        *q=ch;
        p++;
        q--;
    }

    return 0;
}

