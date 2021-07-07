#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp;
printf("enter limit of the aray");
scanf("%d",&n);
printf("ENTER ELEMENTS");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\n aray before sorting\n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
for(j=1;j<=n;j++)
{
for(i=1;i<=n-j;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
printf("\n aray after sorting \n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
getch();
}