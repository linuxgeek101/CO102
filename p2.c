#include <stdio.h>
int main()
{
	printf("Enter 10 numbers:\n");
	int max;
	int a;
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if(i==0) max = a;
		if(a > max) max = a;
	}
	printf("Greatest number : %d\n", max);
	

}

