#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;
  char ch;

  fp = fopen("noob.txt", "w");

  while((ch = getchar()) != '\n') {
    fputc(ch, fp);
  }

  fclose(fp);
  
  
}
