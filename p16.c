#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	int *ar = malloc(n * sizeof(int));
	//if(!ar) return 0;
	for(int i = 0; i < n; i++)
        {
                scanf("%d ", (ar + i));
        }
	for(int i = 0; i < n; i++)
        {
                printf("%d ", ar[i]);
        }
	printf("\n");
	int mi = 0, t;
	for(int i = 0; i < n; i++)
	{
		mi = i;
		for(int j = i; j < n; j++)
		{
			if(ar[j] < ar[mi])
				mi = j;
		}
		t = ar[mi];
		ar[mi] = ar[i];
		ar[i] = t;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
	free(ar);
}
