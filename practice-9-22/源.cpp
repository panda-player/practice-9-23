#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 20;
	int b = 1;
	int c = a / b;
	int count = 0;
	int f = c;
	while (c != 0)
	{
		int d = c;
		d = c / 2;
		if (c % 2 != 0)
		{
			count++;
		}
		f = f + d;
		c = c / 2;
	
	}
	int count1 = 0;
	while (count >= 2)
	{

		count1=count1+count/2;
		count = count / 2;
	}
	printf("%d", count1 + f);
	return 0;
}
