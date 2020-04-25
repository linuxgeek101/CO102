#include <stdio.h>
int main()
{
  char str[256], temp;
  int i=0;
  printf("Enter the string: ");
  fgets(str, 256, stdin);
  printf("Reverse of the string: ");
  for(i=0;str[i]!='\0' && str[i]!='\n';i++);
  for(int j=0;j<i/2;j++)
  {
    temp=str[j];
    str[j]=str[i-j-1];
    str[i-j-1]=temp;
  }
  printf("%s\n",str);
}
