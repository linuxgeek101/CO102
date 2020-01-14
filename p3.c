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
	si = (prin * rate * time )/ 100;
	printf("Simple Interest : %.2f\n", si);

}
