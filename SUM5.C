/* Wap to Print Sum of 5 int Number useing UDF. */
#include<stdio.h>
#include<conio.h>

void sum(int []);

void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter Value no: ");
		scanf("%d",&a[i]);
	}
	sum(a);
	getch();
}

void sum(int x[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
		sum=sum + x[i];
	printf("\nThe sum is : ");
	printf("%d",sum);
}
