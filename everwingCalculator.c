#include <stdio.h>
#include <math.h>


int sigma(int start, int increment, int n){
  int total = 0;
  int index = 0;
  while(index < n){
    total += start;
    start+= increment;
    index++;
  }
  return total;
}
int main(){
  int total = 0;
  total = sigma(0,100, 50);
  printf("%d\n",  total);
}
