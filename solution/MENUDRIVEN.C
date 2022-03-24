#include<stdio.h>
#include<conio.h>

int menu();
void sod();
void pel(int);
int arm();
int sqs(int);

void main()
{
	int a,b,c,no;
	char yn;

	do
	{
		clrscr();
		c=menu();
		switch(c)
		{
			case 1:
				sod();
				getch();
				break;

			case 2:
				printf("\n\tEnter any Number:");
				scanf("%d",&a);
				pel(a);
				getch();
				break;

			case 3 :
				b=arm();
				if(b==1)
					printf("\n\t It is ArmStrong");
				else
					printf("\n\t It is Not ArmStrong");
				getch();
				break;

			case 4:
				printf("\n\tEnter any Number:");
				scanf("%d",&no);
				c=sqs(no);
				printf("%d",c);
				getch();
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvailde choice \n\t Please Enter Number Between 1 to 4");
				break;
		}
		printf("\n\n\tdo U want to continue ?(YES=Y/y,NO=N/n):");
		flushall();
		scanf("\n%c",&yn);
	}
	while(yn=='Y'|| yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\n\t MENU");
	printf("\n---------------------------------");
	printf("\n1.Sum of Digit\n2.Pelindrom\n3.ArmStrong Number\n4.Square Serise\n5.exit");
	printf("\n---------------------------------");
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	return(choice);
}
void sod()
{
	int n,r,sum=0;
	printf("\n\tEnter Number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\n\tSum of Digit=%d",sum);
}
void pel(int x)
{
	int b,c,s=0;
	c=x;
	while(x>0)
	{
		b=x%10;
		s=b+s*10;
		x=x/10;
	}
	if(c==s)
		printf("\n%d is Pelindrom Number");
	else
		printf("\n%d is not Pelindrom Number");
}
int arm()
{
	int a,b,sum=0,r;
	clrscr();
	printf("\n\tEnter a Number:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		r=a%10;
		sum=sum+(r*r*r);
		a=a/10;
	}
	if(b==sum)
		b=1;
	else
		b=0;
	return b;
}

int sqs(int x)
{
	int i;
	for(i=1;i<x;i++)
	{
		printf("\n\t%d",i*i);
	}
	return(i);
}