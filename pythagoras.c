#include<stdio.h>
#define max 100
int main()
{
int k,i,j,n,a[max];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
{printf("%d %d %d",a[i],a[j],a[k]);
i=n;j=n;break;
}
}
}
}
return 0;
}
