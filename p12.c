#include <stdio.h>
int main()
{
	int n, x;
	printf("Enter the no. of elements in array : ");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements of array :\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ar + i);
	}
	printf("Enter a number to search : ");
	scanf("%d", &x);
	for(int i = 0; i < n; i++)
	{
		if(x == ar[i])
		{
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found\n");
}
