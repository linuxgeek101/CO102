#include <stdio.h>
int main()
{
	int dec, bin;
	bin = 0;
	printf("Enter a number in decimal system: ");
	scanf("%d", &dec);
	int n = dec; int db=0;
	while(n > 0)
	{
		db++;
		n /= 2;
	}
	printf("%d\n", db);
	int fac = 1;
	while(dec >= 1)
	{
		if(dec%2==1)
			bin += 1 * fac;
		fac *= 10;
		dec /= 2;
	}
	printf("%d\n", bin);
	printf("Enter a number in binary: ");
	scanf("%d", &bin);
	fac = 1;
	while(bin > 0)
	{
		dec += fac * (bin%10);
		fac *= 2;
		bin /= 10;
	}
	printf("%d\n", dec);
}
