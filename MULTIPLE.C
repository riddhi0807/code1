#include <stdio.h>
#include <conio.h>
void multi(int);
void main()
{
	int n;
	clrscr();
	printf("Enter no.");
	scanf("%d",&n);
	multi(n);
	getch();
}
void multi(int n)
{
	int i=1;
	for (i=1;i<=10;i++)
    printf("%d*%d=%d\n",n,i,(n*i));
	}