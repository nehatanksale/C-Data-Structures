#include<stdio.h>
#include<stdlib.h>

main()
{
int i,j,arr[3][3];
printf("Enter the matrix ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}

printf("Entered matrix is:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
}
