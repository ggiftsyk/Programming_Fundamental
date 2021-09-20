#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n,a,i,j,b,c,x;
    scanf("%d",&n);
    a = (2*n)-1;
    //base
    for(i=1;i<=(2*n)-1;i++)
	{
		printf("*");	
	}
	printf("\n");
    //rectangle above
    for(i=1;i<=n-1;i++)
	{
        for(j=1;j<a;j++)
	{
            if(j<=i)
		{
                printf(" ");
                b=b+1;
            	}
            else
		{
                printf("*");
            	}
        }
        for(x=1;x<=b;x++)
	{
            printf(" ");
        }
        printf("\n");
        b = 0;
        a = a-1;
        c = a;
	}
    //rectangle below
    int y,z,e,d,w;
    d = (2*n)-1;
    for(y=2;y<=n-1;y++)
    {  
        d=d-1;
        e=d;
    }
    for(y=n-1;y>1;y--)
    {
        for(z=1;z<=e;z++)
	{
            if(z<y)
            {
                printf(" ");
            }
            else
            {
            	printf("*");
	    }
        }
        for(w=1;w<y;w++)
	{
            printf(" ");
        }
    	e=e+1;
	printf("\n");
    }
    //base
    for(y=1;y<=(2*n)-1;y++)
    {
	printf("*");
    }
    return 0;
}
