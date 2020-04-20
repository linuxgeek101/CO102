#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, x;
	printf("Enter the no. of elements in array : ");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements of array :\n");
	for(int i = 0; i < n; i++)
=======
	int x;
	const int N = 10;
	printf("Enter the no. of elements in array : ");
	scanf("%d", &N);
	int ar[10];
	printf("Enter elements of array :\n");
	for(int i = 0; i < N; i++)
>>>>>>> 5c9f865773fc0321f29fc6f14c4e2ab13ce4157e
	{
		scanf("%d", ar + i);
	}
	printf("Enter a number to search : ");
	scanf("%d", &x);
<<<<<<< HEAD
	for(int i = 0; i < n; i++)
=======
	for(int i = 0; i < N; i++)
>>>>>>> 5c9f865773fc0321f29fc6f14c4e2ab13ce4157e
	{
		if(x == ar[i])
		{
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found\n");
}
