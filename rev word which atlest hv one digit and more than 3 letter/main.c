#include <stdio.h>
#include <stdlib.h>
void revw(char*q,char*p);
void rev(char*p);
int main()
{
    char s[100],*p,*q;int f;
    scanf("%[^\n]",s);

    q=p=s;
    while(*p)
    {
    q=p;f=0;
      while((*q!=' ')&&*q)
      {
        if(*q>=48&&*q<=57)
            f=1;
        q++;
      }

        if(*q=='\0')
        {
            if((q-1>p+2)&&f)
              rev(p);
            break;
        }
        if((q-1>p+2)&&f)
          revw(p,q-1);
    p=q+1;
    }
    printf("%s",s);
    return 0;
}
void revw(char*q,char*p)
{
    while(q<p)
    {
        char temp;
        temp=*q;
        *q=*p;
        *p=temp;
        q++;p--;
    }
}
void rev(char*p)
{
    int l=0,j=0;
    while(p[l])
        l++;
        l--;
    while(j<l)
    {
        char temp;
        temp=p[l];
        p[l]=p[j];
        p[j]=temp;
        j++;l--;
    }

}
