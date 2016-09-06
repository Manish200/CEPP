#include<stdio.h>
#define max 100
void quicksort(int[],int ,int);
int partition(int[],int,int);
int main()
{
int i,n,a[max];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}
int partition(int a[],int l,int h)
{
int i=l,t,pivot=a[h],j=h;
while(i<j){
while(a[i]<=pivot) i++;
while(a[j]>=pivot)j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;}
}
}
quicksort(int a[],int l,int h)
{
    int pivot;
if(l<h){
pivot=partition( a, l, h);
quicksort(a,l,pivot-1);
quicksort(a,pivot,h);
}
}
