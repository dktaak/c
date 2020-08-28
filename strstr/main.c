#include <stdio.h>
#include <stdlib.h>

char*my_strstr(char *my_string,char *my_substring);

int main()
{
    char m[50]; char sub[10];
    printf("Enter string\n");
    scanf("%[^\n]",m);

    printf("Enter Sub string\n");
    scanf("%s",sub);

    char *p;
    p=my_strstr(m,sub);
    if(p)
        printf("present at = %p\n",p);
    else
        printf("Not Present...\n");
    return 0;
}
char* my_strstr(char*m,char*s)
{
    int i,j;

    for(i=0;m[i];i++)
    {
        if(m[i]==*s)
        {
            for(j=1;s[j];j++)//no need to check 0th letter again
            {
                if(s[j]!=m[i+j])
                    break;
            }
            if(s[j]=='\0')
                return m+i;
        }
    }
    return 0;
}
