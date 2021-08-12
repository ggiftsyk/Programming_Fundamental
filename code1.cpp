#include<stdio.h>

int main()
{
		int num,x=2;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Factoring Result : ");
	while(num!=1){
	while(num%x==0){
		printf("%d",x);
		if (num/x!=1)
		{
			printf("x");
		}
		num=num/x;
	}
	x++;
	}
	return 0;
}
