#include<stdio.h>

int main()
{
	int num,x=2;
	scanf("%d",&num);
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
	
