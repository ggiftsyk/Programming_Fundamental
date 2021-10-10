#include <iostream>

using namespace std;
unsigned int fact(unsigned n)
{
	if (n > 1)
	{
		unsigned int f = 1;
		for (int i = 2; i <= n; i++)
		{
			f *= i;
		}
		return f;
	}
	else
	{
		return 1;
	}
}

unsigned int product(unsigned int m, unsigned int n)
{
	unsigned int f = 1;
	for (unsigned int i = m; i <= n; ++i) {
		f *= i;
	}
	return f;
}
unsigned int permute(unsigned int n, unsigned int r)
{
	return product(n - r + 1, n);
}

unsigned int combi(unsigned int n, unsigned int r)
{
	return permute(n, r) / fact(r); 
}

int main() {
	int n, r, choice;
	cout << "Enter the value of n = ";
	cin >> n;
	cout << "Enter the value of r = ";
	cin >> r;
	if (n < r) {
		cout << "the value of n must be greater than r " << endl;
		cout << "Enter again";
		cin >> n >> r;
	}
	cout << "\tEnter 1 to find permutation " << endl;
	cout << "\tEnter 2 to find combination\n" << endl;
	cout << "Enter your choice = ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "nPr is \t";
		cout << permute(n,r)<< endl;
		break;
	}
	case 2:
	{
		cout << "nCr is \t";
		cout << combi(n, r) << endl;
		break;
	}
	default:
	{
		cout << "Your Entered an incorrect chioce: " << endl;
		break;
	}
	}
	return 0;
}
