#include<stdio.h>
int main ()
{
	float weight,height,BMI;
	printf("weight : ");
	scanf("%f",&weight);
	printf("height : ");
	scanf("%f",&height);
	char a [3] = "Kg";
	char b [3] = "m";
	BMI = weight/((height*0.01)*(height*0.01));
	printf("weight = %.0f %s  height = %.0f %s",weight,a,height,b);
	printf("\nBMI = %f",BMI);
	if(BMI<=18.5)
	{
		printf("\nunderweight");}
	else if((BMI>18.5) && (BMI<=24.9))
		{
		printf("\nhealthy");	
		}
	else if((25<=BMI)&&(BMI<=29.9))
	{
		printf("\noverweight");
	}
	else 
	{
		printf("\nobese");
	}
	return 0;
}
