#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n, x;
  _Bool found = false;
  printf("Enter the no. of elements in the array:");
  scanf("%d", &n);
  int ar[n];
  printf("Enter the %d elements:", n);
  for(int i = 0; i < n; i++)
    scanf("%d", ar+i);
  printf("Enter the element you want to search for : ");
  scanf("%d", &x);
  for(int i = 0; i < n; i++)
    if(ar[i] == x)
     found = true; 
  if(found)
    printf("Found!\n");
  else
    printf("Not Found!\n");
}
