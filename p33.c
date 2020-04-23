#include <stdio.h>
#include <stdlib.h>
int main()
{
  int m, n;
  printf("Enter no. of rows : ");
  scanf("%d", &m);
  printf("Enter no. of columns : ");
  scanf("%d", &n);
  int *arrp[m];
  for(int i = 0; i < m; i++)
    *(arrp + i) = (int *)malloc(n * sizeof(int));

  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < m; j++)
    {
      int c = 0;
      scanf("%d", &c);
      arrp[i][j] = c; 
    }
  }
  printf("--------------------------------------------------\n");
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < m; j++)
    {
      printf("%d\t", *(*(arrp+ i) + j) * *(*(arrp + i) + j));
    }
    printf("\n");
  }
}
