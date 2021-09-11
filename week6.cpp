#include<iostream>
using namespace std;
int main(){
	int i,j,spc,rows,k;
	cout<<" ";
	cin >> rows;
	spc = rows + 4 - 1;
	for(i=1;i<=rows;i++){
		for(k=spc;k>=1;k--)
		{
			cout << " ";
		}
		for(j=1;j<=(2*i-1);j++)
		{
			cout << "*" ;
		}
		cout<<endl;
		spc--;
	}
}
