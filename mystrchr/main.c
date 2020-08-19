#include <stdio.h>
#include <stdlib.h>
void mystrcpy(char*,const char*);
char* mystrchr(const char*,char);
int main()
{
    char s[20],ch;
    printf("Enter String\n");
    scanf("%s",s);
    printf("Enter character\n");
    scanf(" %c",&ch);

    char *p=mystrchr(s,ch);
    if(p==0)
        printf("Not found");
    printf("%p  %p\n",s,p);

    //delete ch using strcpy
    mystrcpy(p,p+1);
    printf("String after character delete\n");
    printf("%s\n",s);
    return 0;
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
void mystrcpy(char*s1,const char*s2)
{
   // int i;
    //for(i=0;s1[i];i++);//find length of a string one
    while(*s2)
        *s1++=*s2++;
    *s1=*s2;//copy \0
    return 0;
}
