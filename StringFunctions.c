#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
int i;
char arr[]="Hello";
char arr2[]="World";
int len1;
//Length of String
len1=strlen(arr);      
printf("%d",len1);


//concatenation of strings
strcat(arr,arr2);
printf("%s",arr);



}
