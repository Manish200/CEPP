#include<stdio.h>
#define max 100
int main()
{
int flag=0,i,n,a[max];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if((a[abs(a[i])]>0)&&(a[abs(a[i])]!=n))
a[abs(a[i])]=a[abs(a[i])]*-1;
else if((a[abs(a[i])]<0)||(a[abs(a[i])]==n))
{printf("YES");
flag=1;break;}
else
a[abs(a[i])]=n;
}

if(flag==0)
 {

 printf("NO");
 }
return 0;
}
