#include<stdio.h>
int main()
{
unsigned long long int fact=1;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact*=i;
}
printf("%lld",fact);
}
