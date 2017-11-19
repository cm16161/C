#define SHELLSCRIPT "fortune | cowsay"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i=0;
    puts("Will execute sh with the following script :");
    while  (i<2){
      system(SHELLSCRIPT);
      sleep(3);
  }
  // puts(SHELLSCRIPT);
  // puts("Starting now:");
    return 0;
}
