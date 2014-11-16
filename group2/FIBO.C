#include<stdio.h>
#include<conio.h>
void rec(int x,int y,int z)
{
	int a;
	if(z>=0)
	{
		a=x+y;
		printf("\n %d",a);
		y=x;
		x=a;
		z--;
		rec(x,y,z);
	}
}
void main()
{
	int n;
	clrscr();
	printf("Enter elemet = \n");
	scanf("%d",&n);
	rec(0,1,n);
	getch();
}