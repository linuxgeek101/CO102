#include <stdio.h>
int main()
{
	int n;
	printf("Enter length: ");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ar+i);
	}
	int temp = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(ar[j] < ar[i])
			{
				temp = ar[j];
				ar[j] = ar[i];
				ar[i] = temp;
			}
		}
	}
	printf("\n");
	for(int  i = 0; i < n; i++)
                printf("%d ", ar[i]);
	printf("\n");
}
