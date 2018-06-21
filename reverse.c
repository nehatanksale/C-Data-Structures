#include<stdio.h>
#include<stdlib.h>


int main()
{
int n,i;
int arr[n];
printf("Enter the total elements:");
scanf("%d",&n);

printf("Enter the elements:");

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Reverse of the array is:");
for(i=n-1;i>=0;i--)
{
printf("%d",arr[i]);
}
}
