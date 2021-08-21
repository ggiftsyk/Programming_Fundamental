#include<stdio.h>
using namespace std;
void sq(int x,int y);
int main(){
	int a;
	scanf("%d",&a);
	sq(a,a);
}
void sq(int x,int y){
	for(int i=0; i<x; i++){
		printf("*");
	}
	printf("\n");
	if(y>1)
	{
		sq(x,y-1);
	}
}

