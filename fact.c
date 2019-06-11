#include<stdio.h>
int main()
{
unsigned long long int fact=1;
int n,i;
scanf("%d",&n);
for(i=0,fact=1;i<n;fact=fact*i++);
printf("%lld",fact);
}
