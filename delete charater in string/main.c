#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[15],buffer[15],b[15],ch;
    int i,j,n=0,m,f,c;
    printf("enter string\n");
    scanf("%s",a);
    printf("enter b array string\n");
    scanf("%s",b);
    printf("enter ch\n");
    scanf(" %c",&ch);

    //find string length using pointer
    char *p=a;
    while(p[n])
    {
       n++;
    }
    printf("length of string = %d\n",n);

    // Write a one line code to copy the string into another buffer.
    for(n=0;buffer[n]=a[n],a[n];n++);
    printf("using one line code = %s\n",buffer);

    //Write a program to find vowels in a given string.
    for(m=0,c=0;a[m]!='\0'?:printf("%d\n",c),a[m];(a[m]=='a'||a[m]=='A'||a[m]=='e'||a[m]=='E'||a[m]=='i'||a[m]=='I'||a[m]=='o'||a[m]=='O'||a[m]=='u'||a[m]=='U')&&(++c),m++);

    //Write a program to compare two strings.
    for(i=0;a[i];i++)
    {
      if(b[i]!=a[i])
      {
        f=0;
         break;
      }
    }
    if(f==0)
        printf("Not equal\n");
    else
        printf("Equal\n");


    for(i=0;a[i];i++)
    {
      if(ch==a[i])
      {
       for(j=i;a[j];j++)
       {
           a[j]=a[j+1];
       }
       i--;
      }
    }
    printf("%s\n",a);
    return 0;
}
