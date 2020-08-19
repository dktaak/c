#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10],ch;
    int i,j,k,c,f=0;
    printf("enter 1st string\n");
    scanf("%s",a);
/*
    for(i=0;a[i];i++)
    {
      ch=a[i];
       for(j=i-1,f=0;j>=0;j--)
       {
           if(a[j]==ch)
           {
               f=1;
               break;
           }
       }
       if(f==0)
       {
           for(k=i+1,c=0;a[k];k++)
           {
               if(a[k]==ch)
                c++;
           }
           printf("%c is repeating %d Times\n",ch,c);
       }
    }
    return 0;
    */

for(i=0;a[i];i++)
{
ch=a[i];
{
      for(j=i-1,f=0;j>=0;j--)
		if(a[j]==ch)
		{
        f=1;
		break;
		}
}
    if(f==0)
	{
	    for(j=i+1,c=0;a[j];j++)
		if(a[j]==ch)
		c++;

		printf("%c repeated %d times\n",ch,c);
	}
}
return 0;
}
