#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char str[100], * p;
	p = str;
	scanf("%s", str);
	while (*p != '\0')
	{
		if (*p != *(p - 1))
		{
			printf("%c", *p);
			p++;
		}
		else
		{
			p++;
		}
	}
	return 0;
}

