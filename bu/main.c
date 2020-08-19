#include<stdio.h>
void main()
{
    int i,j,l,n,u,r,sum=0,s,c=0;
    printf("Enter the lower range = ");
    scanf(" %d",&l);
    printf("\nEnter the upper range = ");
    scanf(" %d",&u);
    printf("\n");

    if((l>100)&&(u<1000)&&(u>l))
    {
      for(i=l+1,j=u;i<j;i++)
      {
          for(n=i,s=0;n;r=n%10,s=s+r*r*r,n=n/10);

          if(s==i)
          {
              c++;
              sum=sum+s;
              printf("%d\n",s);
          }
      }
      printf("Count of Armstrong number b/w %d to %d = %d\n",l,u,c);
      printf("Sum of Armstrong number b/w %d to %d = %d\n",l,u,sum);
    }
    else if(l>u)
    printf("upper range should be greater than lower range");
    else
    printf("Invalid parameter range\n");


}
