#include <stdio.h>
int main()
{
	float a, b;
	float sum;
	float av;
	printf("Enter a and b :\n");
	scanf("%f %f", &a, &b);
	sum = a + b;
	av = sum / 2;
	printf("Sum: %.0f\nAverage: %.2f\n", sum, av);
}

