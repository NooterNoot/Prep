#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *read, *write;
  char ch;

  read = fopen("noob.txt", "r");
  write = fopen("roopesh.txt", "w");

  while((ch = fgetc(read)) != EOF) {
    fputc(ch, write);
  }

  fclose(read);
  fclose(write);
  
  
}
