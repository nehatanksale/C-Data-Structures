#include<stdio.h>
#include<stdlib.h>



int main()
{
int a,b;


int count=1;

while(count<=2)
{
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Addition is:%d",a+b);
count=count+1;        //very important to increment this.
}

}
