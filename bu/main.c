#include<stdio.h>

int main(void)
{{
    int i,j,n,p;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		p=n;
		for(j=1; j<=i; j++)
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=i-1; j++)
			printf("%d",p++);
		printf("\n");
	}
	n--;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf(" ");
		p=n;
		for(j=1; j<=n-i+1; j++)
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=n-i; j++)
			printf("%d",p++);
		printf("\n");
	}}
	printf("\n");
	{int i,j,n,p;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		p=i;
		for(j=1; j<=i; j++)
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=i-1; j++)
			printf("%d",p--);
		printf("\n");
	}
	n--;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf(" ");
		p=n+1-i;
		for(j=1; j<=n-i+1; j++)
			printf("%d",p++);
		p=p-2;
		for(j=1; j<=n-i; j++)
			printf("%d",p--);
		printf("\n");
	}}
	printf("\n");
{
      int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		for(j=1; j<=2*i-1; j++)
			printf("%d",j);
		printf("\n");
	}
	n--;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)
			printf("%d",j);
		printf("\n");
	}
}
	printf("\n");
{
int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		for(j=1; j<=2*i-1; j++)
			printf("%d",i);
		printf("\n");
	}
	n--;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)
			printf("%d",n+1-i);
		printf("\n");
	}
}
	printf("\n");
{
 int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		for(j=1; j<=2*i-1; j++)
			printf("*");
		printf("\n");
	}
	n--;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf(" ");
		for(j=1; j<=2*(n-i)+1; j++)
			printf("*");
		printf("\n");
	}
}
	printf("\n");
{
int i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
		for(j=1; j<=2*i-1; j++)
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
	printf("\n");
	return 0;
}
