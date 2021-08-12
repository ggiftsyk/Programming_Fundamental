#include<stdio.h>

int main ()
{
	int a,b,x,gcd;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter seond number : ");
	scanf("%d",&b);
	if(a >= b)
	{
		if(a == 0 || b == 0){
			gcd = 0;
		}
	 else{
            for(x=1;x<=a;x++)
            {
                if(a%x==0 && b%x==0)
                {
                    gcd = x;
                }
            }
        }
    }
    else if(b >= a)
    {
        if(a == 0 || b == 0){
            gcd = 0;
        }
        else{
            for(x=1;x<=a;x++)
            {
                if(a%x==0 && b%x==0)
                {
                    gcd = x;
                }
            }
        }
    }
    printf("Greatest common devisor = %d",gcd);

    
}
