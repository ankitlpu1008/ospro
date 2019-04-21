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
