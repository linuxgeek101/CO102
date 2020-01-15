#include <stdio.h>
int main()
{
	int num, nnum, d, fac;
	nnum = 0; 
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	for(int i = 5; i > 0; i--)
	{
		d = num % 10;
		num /= 10;
		fac = 1;
		for(int j = 0; j < i; j++)
			fac *= 10;
		nnum += d * fac;
	}
	nnum /= 10;
	printf("The reverse number is : %d\n", nnum);
}

