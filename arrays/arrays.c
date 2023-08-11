#include <stdio.h>

int main(void) {
  int myNumbers[6] = {25, 45, 23};
  for(int i = 0; i < 6; i++){
    printf("Numbers: %d\n", myNumbers[i]);
    if(myNumbers[i] == 0) {
      printf("Not value designed: ");
    }
  }
  return 0;
}