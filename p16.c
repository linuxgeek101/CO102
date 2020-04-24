#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int *ar = malloc(n * sizeof(int));
  for(int i = 0; i < n; i++)
  {
    scanf("%d", (ar + i));
  }
  int min = 0, temp = 0;
  for(int i = 0; i < n - 1; i++)
  {
		min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(ar[j] < ar[min])
				min = j;
		}
		temp = ar[min];
		ar[min] = ar[i];
		ar[i] = temp;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
  printf("\n");
	free(ar);
}
