#include<stdio.h>
#define max 100
int main()
{
int a[max],i,n,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++){
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}
