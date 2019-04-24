#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct A{
	char name[10];
	int qt;
};
void Bill(struct A a[],int g)
{
float price;
int i,j;
printf("\n\n Do you want print Bill??");
printf("\n\n\n\t Enter Y for'YES'  or N for 'NO'::-");
scanf("%s",&j);
if(j=='Y'){
printf("\n\n\tEnter price of one gift::-");
scanf("%f",&price);
printf("\n\n\t\t\t||Bill of students in order are||");
printf("\n\n\t\tName\t\tQuantity\t\tPrice\n");
for(i=0;i<g;i++)
{
	printf("\n\n\t\t%s\t\t%d\t\t\t%.2f",a[i].name,a[i].qt,(a[i].qt)*price);
}
printf("\n\n\tThank you..\n\n Have a great Day\n");
}
else
printf("\n\n\tThank you..\n");
}
void program()
{
	int p;
	int j,i;
	printf("\n\t\t\tEnter No.of students::-");
	scanf("%d",&p);
	struct A r[p],temp;
	printf("\nEnter Name of students*");
	for(i=0;i<p;i++)
	{
		printf("\n\n\t\tEnter Number %d Name:-",i+1);
		scanf("%s",r[i].name);
		printf("\n\n\t\tEnter Number %d Quantity of Gifts:-",i+1);
		scanf("%d",&r[i].qt);
	}
	printf("\n\nEntered Name & Quantity is below.\n\n");
	printf("\n\n\n\t\tName\t\tGift Quantity\n\n");
	for(i=0;i<p;i++)
	{
		printf("\n\n\t\t%s\t\t\t%d",r[i].name,r[i].qt);
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<p-1;j++)
		{
			if(r[j].qt<r[j+1].qt)
			{
				temp=r[j];
				r[j]=r[j+1];
				r[j+1]=temp;
			}
		}
	}
	printf("\n\n\n Your process is sorting....");
	printf("\n\n Students list after sorting by their gift quantity.\n\n");
	printf("\n\n\t\tName\t\tQuantity\n");
	for(i=0;i<p;i++)
	{
		printf("\n\n\n\t\t%s\t\t%d",r[i].name,r[i].qt);
	}
	Bill(r,p);
}
	int main()
{
	int x;
	printf("\n\n1.Enter the Program\n\n2.Exit\n\n\t\t\tEnter your choice:::-");
	scanf("%d",&x);
	switch(x)
	{
		case 1: program();
		break;
		case 2: return 0;
		break;
		default:
			printf("\nwrong entry!! please chooose correct option\n");
	}
}

