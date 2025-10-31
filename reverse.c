#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <string>\\n", argv[0]);
    return 1;
  }

  char *input = argv[1];
  int len = strlen(input);

  for (int i = 0; i < len / 2; i++) {
    char temp = input[i];
    input[i] = input[len - i - 1];
    input[len - i - 1] = temp;
  }

  printf("%s\\n", input);
  return 0;
}
