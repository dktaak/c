#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10],b[10],r='y';
    int i,j,length_a,length_b,leftspace=0,temp;

    while(r=='y')
    {
    printf("Enter array a and b\n\n");
    scanf("%s\n%s",&a,&b);

    //String Length
    for(i=0;a[i];i++);
    printf("Length of array of a is = %d\n\n",i);
    length_a=i-1;

    for(i=0;b[i];i++);
    printf("Length of array of b is = %d\n\n",i);
    length_b=i-1;

    //Comparison
    for(i=0;a[i];i++)
        if(a[i]!=b[i])
        break;

    if(a[i]==b[i])
        printf("Array is matched\n\n");
    else
        printf("Array is not matched\n\n");

     //Reverse
    for(i=0,j=length_a;i<j;i++,j--)
        if(a[i]!=a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
        printf("%s\n\n",a);

    //Concatenation
    leftspace=10-length_a; //one space reserved for \0 so use j < len_j

    for(i=0;a[i];i++);//dummy loop to reach the index after  1st array element
    for(j=0;b[j]&&j<leftspace;j++,i++)
    {
        a[i]=b[j];
    }
    a[i]=b[j];//copy \0 to a at last
    printf("%s  %s\n\n",a,b);







    printf("Want to continue again press y/n\n");
    scanf(" %c",&r);
    }

    return 0;
}
