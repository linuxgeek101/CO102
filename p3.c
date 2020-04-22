#include <stdio.h>
int main()
{
	double prin, rate, time, si;
	printf("Enter Principal : ");
	scanf("%lf", &prin);

	printf("Enter rate : ");
	scanf("%lf", &rate);
	printf("Enter time(in years) : ");
	scanf("%lf", &time);
	si = (prin * rate * time )/ 100;
	printf("Simple Interest : %.2lf\n", si);

}
