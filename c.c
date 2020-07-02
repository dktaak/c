#include<stdio.h>
void main()
{
/*
int num1,num2,num3,num,pos;
printf("enter number\n");
scanf("%d",&num);
printf("enter position\n");
scanf("\n%d",&pos);
//char ch='s';
//to clear bit
num1=num&~(1<<pos);
//to set a bit
num2=num|1<<pos;
//to complement a bit
num3=num^1<<pos;
printf("clear bit=%d\nset bit=%d\ncomplement bit=%d",num1,num2,num3);
//(num&1<<pos)>0?printf("\n%d bit is set",pos):printf("\n%d bit is clear",pos);
//(num&1<<pos?printf("\n%d bit is set",pos):printf("\n%d bit is clear",pos);
num>>pos&1?printf("\n%d bit is set\n",pos):printf("\n%d bit is clear\n",pos);
//printf("\n%ld\n%ld\n%d\n%d\n",sizeof(int),sizeof(float),sizeof('s'),sizeof(ch));
*/

//Use of ternary operator

int i=20,j=30;
//i>j?printf(" \n%d is bigger\n",i):printf(" \n%d is bigger\n",j);
//i=i>j?j=40:j=50; //will give lvaue error bec will treat like this i=(i>j?j=40:j)=50; based on priority
i=i<j?j=40:(j=50);
printf(" \ni=%d\nj=%d\n",i,j);
}
