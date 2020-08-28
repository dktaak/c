#include <stdio.h>
#include <stdlib.h>

void mystrcpy(char*,const char*);
int main()
{
    char s1[40],s2[20];
    printf("Enter String s1,s2\n");
    scanf("%s%s",s1,s2);
    mystrcpy(s1,s2);
    printf("\n%s",s1);
    return 0;
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

