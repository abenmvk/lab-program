#include<stdio.h>
#include<conio.h>
void main()
{
	int a[13],i,j=1,n,val,pos=-1;
	printf("ENTER SIZE of  ARAY");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("ARAY\n");
	for(i=i;i<=n;i++)
	{
	printf("%d",a[i]);
	}
	printf("enter  element to  search");
	scanf("%d",&val);
	while(j<=n)
	{
	if(a[j]==val)
	{
	pos=j;
	printf("%d founded at location %d",val,pos);
	}
	j=j+1;
	}
	if(pos==-1)
	printf("value  not present in the aray");
	getch();
	}