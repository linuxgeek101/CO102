#include <stdio.h>
int main()
{
	float prin, rate, time, si;
	printf("Enter Principal : ");
	scanf("%f", &prin);

	printf("Enter rate : ");
	scanf("%f", &rate);
	printf("Enter time(in years) : ");
	scanf("%f", &time);
	si = ((float)prin * rate * time )/ 100.0f;
	printf("Simple Interest : %.2f\n", si);

}
