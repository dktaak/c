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

