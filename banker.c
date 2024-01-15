#include<stdio.h>
int maxarray[10][10],allocationmatrix[10][10],need[10][10],available[10];
int nor,nop,i,j;
void acceptmax()
{
	printf("Enter Max Array :\n");
	for(i=0;i<nop;i++)
	{
		for(j=0;j<nor;j++)
		{
			scanf("%d",&maxarray[i][j]);
		}
	}
}
void display()
{
	printf("\n Max Array is :\n");
	for(i=0;i<nop;i++)
	{
		for(j=0;j<nor;j++)
		{
			printf("%d\t",maxarray[i][j]);
		}
		printf("\n");
	}
}
void acceptallocation()
{
	printf("\n Enter Allocation Matrix:\n");
	for(i=0;i<nop;i++)
	{
		for(j=0;j<nor;j++)
		{
			scanf("%d",&allocationmatrix[i][j]);
		}
	}
}
void displayallocation()
{
	printf("\n Allocation Matrix:\n");
	for(i=0;i<nop;i++)
	{
		for(j=0;j<nor;j++)
		{
			printf("%d\t",allocationmatrix[i][j]);
		}
		printf("\n");
	}
}
void calculate_need()
{
	printf("\n Need Matix:\n");
	for(i=0;i<nop;i++)
	{
		for(j=0;j<nor;j++)
		{
			need[i][j]=maxarray[i][j]-allocationmatrix[i][j];
			printf("%d\t",need[i][j]);
		}
		printf("\n");
	}
}
void acceptavailable()
{
	printf("\n Enter available Matrix :\n");
	for(i=0;i<nor;i++)
	{
		scanf("%d",&available[i]);
	}
}
void displayavailable()
{
	printf("\n Available Matrix is :\n");
	for(i=0;i<nor;i++)
	{
		printf("%d\t",available[i]);
	}
}			
int main()
{
	printf("Enter No of Processes:\n");
	scanf("%d",&nop);
	printf("Enter no of Resources:\n");
	scanf("%d",&nor);
	acceptmax();
	display();
	acceptallocation();
	displayallocation();
	calculate_need();
	acceptavailable();
	displayavailable();
}


			
