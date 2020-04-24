#include <stdio.h>
#include <stdlib.h>

int main()
{
	      int *ar;int n, x;
        printf("No. of elements : ");
        scanf("%d", &n);
        ar = (int *) malloc(n * sizeof(int));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", ar + i);
        }
        int temp = 0;
        for(int i = 0; i < n-1; i++)
        {
          for(int j = 0; j < n-i-1; j++)
          {
            if(ar[j] > ar[j+1])
            {
              temp = ar[j+1];
              ar[j+1] = ar[j];
              ar[j] = temp;
            }
          }
        }
    for(int i = 0;i < n; i++)
		  printf("%d ", ar[i]);
	  printf("\n");
    free(ar);
}
