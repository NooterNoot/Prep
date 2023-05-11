#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;
  char ch;

  fp = fopen("noob.txt", "r");

  while((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
  }

  fclose(fp);
  
  
}
