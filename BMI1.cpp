#include<stdio.h>
int main ()
{
	double weight,height,BMI;
	printf("Please enter your weight(kg) : ");
	scanf("%lf",&weight);
	printf("Please enter your height(m) : ");
	scanf("%lf",&height);
	height = height/100;
	BMI = weight/(height*height);
	printf("BMI = %lf",BMI);
	if(BMI>30)
	{
		printf("\nobese");
	}
	else if(BMI>18.5)
		{
		printf("\nunderweight");	
		}
	else if((18.5<=BMI)&&(BMI<=24.9))
	{
		printf("\nhealthy");
	}
	else if((25.0<=BMI)&&(BMI<=29.9))
	{
		printf("\nobese");
	}
	return 0;
}
