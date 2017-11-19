#include <stdio.h>
#include <stdlib.h>

int Matrix(){
  int i = 0;
  char r;
  while(i<3){
  r = (rand() %93) + 33;
  printf("%c", r);
  }
  return 0;
}

int main(){
  setbuf(stdout, NULL);
  Matrix();
  return 0;
}
