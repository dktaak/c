#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *);
int main()
{
    char s[20];
    int length;

    printf("Enter String\n");
    scanf("%s",s);

    length=mystrlen(s);
    printf("Length is = %d\n",length);
    return 0;
}
int mystrlen(char *s)
{
    int len=0;
    while(*s++)
        len++;
    return len;
}
