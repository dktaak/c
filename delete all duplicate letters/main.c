#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mystrcpy(char*,char*);
int main()
{
    int i,j,k;
    char s[20],ch;
    printf("Enter string\n");
    scanf("%s",s);

    int l;
    for(int i=0;s[i];i++)
        l=i;
        printf("length=%d\n",l);
    for(int h=0,i=0;s[i];i++)
    {
        printf("\nOuter loop i=%d ",i);
        ch=s[i];
        printf("ch=%c\n",ch);

        for(j=l-h;j>i;j--)
        {
            printf("now j=%d\n",j);
            if(s[j]==ch)
            {
                h++;
                printf("condition true at j=%d ,h=%d\n",j,h);
                mystrcpy(s+j,s+j+1);
                printf("string after deletion at j=%d is = %s\n",j,s);
            }

        }
        printf("Final String is = %s",s);
    }
    return 0;
}
void mystrcpy(char*s1,char*s2)
{
    int i=0;
    while(*s2)
        s1[i++]=*s2++;
    s1[i]=*s2;//copy \0
    return 0;
}
