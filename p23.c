#include <stdio.h>
#include <string.h>
int main()
{
  char str1[256], str2[256];
  int i=0;
  printf("Enter first string (case sensitive): ");
  fgets(str1, 256, stdin);
  printf("Enter second string (case sensitive): ");
  fgets(str2, 256, stdin);
  printf("String comparison returned: ");
  if(strlen(str1) > strlen(str2))
  {
    printf("+1\n");
    return 0;
  }
  if(strlen(str2) > strlen(str1))
  {
    printf("-1\n");
    return 0;
  }
  for(int k = 0; str1[k]!='\0' && str1[k]!='\n';k++)
  {
    if(str1[k]>str2[k])
    {
      printf("+1\n");
      i=1;
      break;
    }
    else if(str1[k]<str2[k])
    {
      printf("-1\n");
      i=1;
      break;
    }
  }
  if(i==0)
    printf("0\n");
}
