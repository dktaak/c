#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,5,9,7,3,4,6,8,40};
    int ele,i,k,j,t;
    ele=sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<ele-1;i++)
        for(j=i+1;j<ele;j++)
        {
           if(a[i]>a[j])
           {
               printf("%d > %d --> True\n",a[i],a[j]);
               t=a[i];
               a[i]=a[j];
               a[j]=t;
               printf("\n After swap of %d with %d \n",a[i],a[j]);

               for(k=0;k<ele;k++)
                {
                 printf("%d ",a[k]);
                }
                 printf("\n");
               continue;
           }
        printf("%d is compared with %d\n",a[i],a[j]);
        }

    for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
