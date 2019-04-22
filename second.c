#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
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
