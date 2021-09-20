#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{   
    int n,a,b,c,d,i,j,x,y; 
    printf("Enter your number :");
    scanf("%d", &n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<a;b++) 
		{
			printf(" ");
		}
		for (d=n;d>b;d--) 
		{
			printf("*");
		}
 		for (c=n;c>=a;c--) 
		{
			printf("*");
		}
		printf("\n");
	}	
	for(i=2;i<=n;i++)
	{
		for (j=n;j>i;j--) 
		{
			printf(" ");
		}
		for (x=1;x<i;x++) 
		{
			printf("*");
		}
		for (y=1;y<=i;y++) 
		{
			printf("*");
		}
 	printf("\n");
	}
    return 0;
}
