#include <stdio.h>

int main()
{
  char str[256];
  printf("Enter a string : ");
  fgets(str, 256, stdin);
  int len = 0;
  char ch;
  do
  {
    ch = str[len];
    len++;
    printf("%c\n", ch);
  }while(ch!='\0' && ch!='\n');
  printf("%d\n", len-1);
}

