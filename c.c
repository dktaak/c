#include<stdio.h>
void main()
{
int num1,num2,num3,num=10,pos=3;
//to clear bit
num1=num&~(1<<3);
//to set a bit
num2=num|1<<3;
//to complement a bit
num3=num^1<<3;
printf("clear bit=%d\nset bit=%d\ncomplement bit=%d",num1,num2,num3);
printf("%d\n%d\n%d\n%d\n",sizeof(int),sizeof(float),sizeof('s'),size of(ch));
}
