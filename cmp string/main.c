#include <stdio.h>
#include <stdlib.h>

int mystrcmp(const char *,const char *);
void mystrcat(char *,const char *);
int main()
{
    char a[20],b[20];
    int i;
    printf("enter two string \n");
    scanf("%s%s",a,b);


    i=mystrcmp(a,b);
    printf("%d\n",i);
    if(i==0)
        printf("Equal\n\n");
    else
        printf("Not equal\n\n");
    printf("\n");
    mystrcat(a,b);
    printf("%s\n",a);
    return 0;
}
int mystrcmp(const char *a,const char *b)
    {
     /*
     for(i=0;a[i]||b[i];i++)
     {
        if(a[i]!=b[i])
        {
            if(a[i]!=b[i])
                break;
        }
     }*/

     //Using while loop

     while(*a)
     {
         if(*a++!=*b++)
            break;
     }

        if(*a==*b)
            return 0;
        else if(*a>*b)
            return 1;
        else
            return -1;
    }
    //concatenate string

    void mystrcat(char *a,const char *b)
    {
     //Using while loop

     int len=1;
     while(*a++)
        len++;
     while(*b)
     {
       a[len]=b[len];len++;
     }
    }

