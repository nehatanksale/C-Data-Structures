#include<stdio.h>
#include<stdlib.h>


int main()
{
int i,j,n,temp;
int arr[50];
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter the elements:");

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}

}

printf("Sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
