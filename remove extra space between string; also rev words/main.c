//remove extra space between string ,also reverse the words which has more than 3 letters and one digit present

#include<stdio.h>
void mystrrev(char *);
void mystrrev1(char*,char *);
void mystrcpy(char*d,char*s);
void main()
{
    char s[100];
    printf("Input--> ");
    scanf("%[^\n]",s);
    mystrrev(s);
    printf("\nOuput-->%s\n",s);
}
void mystrrev(char*p)
{
    char *q,*p1;int f;

    while(*p)
    {
    q=p;
    //to remove consecutive spaces
    for(;*q==' ';q++);
          mystrcpy(p,q);
        for(f=0;*q!=' '&&*q;q++)
            if((*q>47)&&(*q<58))
                f=1;

        if(q-1>p+2&&f==1)
          mystrrev1(p,q-1);

      if(*q=='\0')
            break;
    p=q+1;
    }
}
void mystrrev1(char*f,char*l)
{
    while(f<=l)
    {
        int temp;
        temp=*l;
        *l=*f;
        *f=temp;
        f++;
        l--;
    }
}
void mystrcpy(char*d,char*s)
{
    while(*s)
    {
        *d=*s;
        d++;s++;
    }
    *d=*s;
}





