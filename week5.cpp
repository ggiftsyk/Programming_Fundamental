#include<stdio.h>
void func(int x,int y){
	for(int x=0;x<y;x++){
		printf("*");
	}
	printf("\n");
	if(y<x){
		func(x,y+1);
	}
}
int main(){
	int x;
	scanf("%d",&x);
	func(x,0);
}
