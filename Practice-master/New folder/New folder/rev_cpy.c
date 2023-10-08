#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long loc;
  FILE *in, *out;
  char ch;
  in=fopen(argv[1],"r");
  out=fopen(argv[2],"w");
  fseek(in, 0, SEEK_END);
  loc = ftell(in);

  while(loc > 0) {
    fseek(in, loc-1, SEEK_SET);
    ch = fgetc(in);
    fputc(ch, out);
    loc--;
  }
  fclose(in);
  fclose(out);
}