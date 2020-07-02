#include<stdio.h>
void main()
{
int num1,num2,num3,num,pos;
printf("enter number");
scanf("%d",&num);
printf("enter position");
scanf("%d",&pos);
//char ch='s';
//to clear bit
num1=num&~(1<<pos);
//to set a bit
num2=num|1<<pos;
//to complement a bit
num3=num^1<<pos;
printf("clear bit=%d\nset bit=%d\ncomplement bit=%d",num1,num2,num3);
(num&1<<pos)>0?printf("\n%d bit is set",pos):printf("\n%d bit is clear",pos);
//printf("\n%ld\n%ld\n%d\n%d\n",sizeof(int),sizeof(float),sizeof('s'),sizeof(ch));
}
