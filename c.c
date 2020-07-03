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

//int i=40,j=30;
//i>j?printf(" \n%d is bigger\n",i):printf(" \n%d is bigger\n",j);
//i=i>j?j=40:j=50; //will give lvaue error bec will treat like this i=(i>j?j=40:j)=50; based on priority
//i=i<j?j=40:(j=50);
//printf(" \ni=%d\nj=%d\n",i,j);


//odd/even and +/-

//int nu;
//scanf("num= %d ",&nu);
//nu<0 ? printf("negative\n"):printf("+ve\n");
//nu%2 ? printf("even\n"):printf("odd\n");
/*
    while(1)
    {
int n;
scanf("%d",&n);
n<0?printf("-ve\n"):printf("+ve\n");
n%2?printf("odd\n"):printf("even\n");
    }
    */
    /*
    int i=2,j=7;
    j=i|j&j^!i;
    printf("%d %d",i,j);
*//*
int i=-5;
i=i/3;
printf("i=%d\n",i);
*/
//  Why -15%4 give answer in minus form
/*
char i=-15;
i=i%4;
int j=i/4;
printf("i=%d %d\n",i,j);
*/
/*
// *** question
unsigned int k =-14;
k=k*5;
printf("\n%d",k);
*/
/*
int a=5;
a=!(-a==(a!=1));
printf("\n%d",a);
*/
/*
int x=(3*3>=9)*(9<=9+5)*2;
printf("\n%d",x);
*/
//int x=12+3*5/4-10;  printf("\n%d",x);


//int v=4*(3+4)/3-2;  printf("\n%d",v);

//int w=4,x=2,y=5,z=1,v;  v=y>=w*y<=x==z;   printf("\n%d",v);

int x,y=5,z=5;    x=y==z==x;      printf("\n%d",x);



}
