#include <stdio.h>
int main(int argc, char** argv)
{
  FILE* fil = NULL;
  fil = fopen(argv[1], "r");
  if(!fil)
  {
    printf("Unable to open file!");
    return 1;
  }
  char ch;
  int count = 0;
  while(ch != EOF)
  {
    ch = fgetc(fil);
    count++;
  }
  printf("The size of the given file is : %d bytes\n", count-1);
  fclose(fil);
}
