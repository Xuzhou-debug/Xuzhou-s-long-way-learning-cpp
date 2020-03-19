#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
	char a[500];
	char b[500];
	scanf("%s",a);
	scanf("%s",b);
	long  x = atoi(a);
	long  y = atoi(b);
	if (x == y)
	{
		printf("%s\n", a);
	}
	else if (x > y)
	{
		printf("%s\n", a);
	}
	else
	{
		printf("%s\n", b);
	}
	return 0;
}