#include <stdio.h>
int main()
{
	int x;
	double e = 2.718281;
	double ans = 1.0;
	printf("Enter a number: ");
	scanf("%d", &x);
	for(int i = 0; i < x; i++)
	{
		ans *= e;
	}
	printf("Answer : %f\n", ans);
}
