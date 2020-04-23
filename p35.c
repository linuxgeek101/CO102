#include <stdio.h>
int main(int argc, char** argv)
{
  FILE* fin = NULL;
  FILE* fout = NULL;
  fin = fopen(argv[1], "r");
  fout = fopen(argv[2], "w");
  char ch = fgetc(fin);;
  while(ch != EOF)
  {
    fputc(ch, fout);
    ch = fgetc(fin);
  }
  fclose(fin);
  fclose(fout);
}
