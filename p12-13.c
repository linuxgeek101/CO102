#include <stdio.h>
int main()
{
	int x;
	const int N = 10;
	printf("Enter the no. of elements in array : ");
	scanf("%d", &N);
	int ar[10];
	printf("Enter elements of array :\n");
	for(int i = 0; i < N; i++)
	{
		scanf("%d", ar + i);
	}
	printf("Enter a number to search : ");
	scanf("%d", &x);
	for(int i = 0; i < N; i++)
	{
		if(x == ar[i])
		{
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found\n");
}
