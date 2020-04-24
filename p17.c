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
  printf("\n");
  int temp, k;
  for(int i = 0; i < n-1; i++)
  {
    int j;
		for(j = 0; j <= i; j++)
    {
      if(ar[i+1] > ar[j])
        continue;
      else
      {
        k = j;
        j = i + 1;
        temp = ar[j];
        while(j > k)
        {
          ar[j] = ar[j-1];
          j--;
        }
        ar[k] = temp;
        break;
      }
    }
	}

	for(int i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
  printf("\n");
	free(ar);
}
