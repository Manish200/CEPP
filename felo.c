#include<stdio.h>
#define max 100
int main()
{
int j,i,n,a[max],t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
i=0;j=n-1;
while(i<j){
while(a[i]%2==0)
i++;
while(a[j]%2!=0)
j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
