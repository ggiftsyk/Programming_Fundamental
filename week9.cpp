#include <iostream>

using namespace std;

unsigned int fact(unsigned n) 
{
	//5! = 5*4*3*2*1
	//0! = 1
	if (n > 1) 
	{
		unsigned int f = 1;
		for (int i = 2; i <= n; i++)
		{
			f = f * i;
		}
		return f;
	}
	else
	{
		return 1;
	}
}

unsigned int permute(unsigned int n, unsigned int r) 
{
	return fact(n) / fact(n - r);
}

unsigned int combi(unsigned int n, unsigned int r) 
{
	return fact(n) / (fact(r)* fact(n - r));
}

int main()
{
	int n, r;
	cout << "Enter the value of n = ";
	cin >> n;
	cout << "Enter the value of r = ";
	cin >> r;
	cout << "nPr is \t";
	cout << permute(n, r) << endl;
	cout << "nCr is \t";
	cout << combi(n, r) << endl;
	return 0;
}
