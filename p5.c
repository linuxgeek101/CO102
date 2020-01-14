#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a;
	bool isPrime=true;
	printf("Enter number: ");
	scanf("%d", &a);
	for(int i = 2; i <= a / 2; i++)
	{
		if(a%i == 0)
			isPrime=false;
	}
	if(isPrime)
		printf("Prime!!!\n");
	else
		printf("Not Prime :-(\n");

}
