#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a,b[50];
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("Enter the target number:");
scanf("%d",&a);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]+b[j+1]==a)
{
printf("%d %d",b[i],b[j+1]);
}
}
}
getch();
}
