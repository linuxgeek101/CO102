#include <stdio.h>
int main()
{
	long long int dec, bin;
	bin = 0;
	printf("Enter a number in decimal system: ");
	scanf("%lld", &dec);
	long long int fac = 1;
	while(dec >= 1)
	{
		if(dec%2==1)
			bin += fac;
		fac *= 10;
		dec /= 2;
	}
	printf("%lld\n", bin);
	printf("Enter a number in binary: ");
	scanf("%lld", &bin);
	fac = 1;
	while(bin > 0)
	{
		dec += fac * (bin%10);
		fac *= 2;
		bin /= 10;
	}
	printf("%lld\n", dec);
}
