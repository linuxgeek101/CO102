#include <stdio.h>
int main()
{
	int num, sum;
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	while(num > 0)
	{
		sum += num%10;
		num /= 10;
	}
	printf("Sum of digits : %d\n", sum);
}
