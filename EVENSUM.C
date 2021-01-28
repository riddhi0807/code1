/*Print all even nos. in the range 0-n nos. & find sum of them */
#include <stdio.h>
#include <conio.h>
void even(int i,int no);
void main()
{
int i,no;
clrscr();
printf("Enter lower limit:");
scanf("%d", &i);
printf("Enter upper limit:");
scanf("%d", &no);
even (i,no);
getch();
}
void even(int i,int no)
    {
        int sum=0;
	while(i<=no)
	{
	if(i%2==0)
	{
	printf("\n Even number is=%d",i);
	sum=sum+i;
	}
	i++;
	}
	printf("\n Addition of number is=%d",sum);
	}