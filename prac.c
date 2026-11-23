#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage error: <name>");
    return 1;
  }
  char *name = argv[1];
  long count = strtol(argv[2], null, 10);
}
