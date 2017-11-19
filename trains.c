#define SHELLSCRIPT "sl"
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=0;
    // puts("Will execute sh with the following script :");
    while  (i<2){
      system(SHELLSCRIPT);
  }
  // puts(SHELLSCRIPT);
  // puts("Starting now:");
    return 0;
}
