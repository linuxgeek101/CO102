//Program to pass and return pointer to function 
//hence calculate average of an array.

#include <stdio.h>
#include <stdlib.h>
double calcAv(int n, int* ar);
int main()
{
  int n;
  printf("No. of elements in the array : "); 
  scanf("%d", &n);
  int* ar = (int *)malloc(n * sizeof(int));
  for(int i = 0; i < n; i++)
    scanf("%d", ar + i);
  double av = calcAv(n, ar); 
  printf("The average of the array is %.2f\n", av);
}
double calcAv(int n, int* ar)
{
  int sum = 0;
  for(int i = 0; i < n; i++)
    sum += *(ar + i);
  return sum/(double)n;
}
