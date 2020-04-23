//Program to pass and return pointer to function hence calculate average of an array.

#include <stdio.h>
#include <stdlib.h>
int calcSum(int n, int* ar);
int main()
{
  int n;
  printf("No. of elements in the array : "); 
  scanf("%d", &n);
  int* ar = (int *)malloc(n * sizeof(int));
  for(int i = 0; i < n; i++)
    scanf("%d", ar + i);
  int sum = calcSum(n, ar); 
  printf("The sum of the array is %d\n", sum);
}
int calcSum(int n, int* ar)
{
  int sum = 0;
  for(int i = 0; i < n; i++)
    sum += *(ar + i);
  return sum;
}
