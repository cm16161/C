#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  fp = fopen("multiplesquares.sketch", "wb");
  fputc(0x1e, fp); //move x
  fputc(0x5e, fp); //move y
  fputc(0xc3, fp); //toggle draw
  fputc(0xf6, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0xe1, fp); //change y read mulitple bytes
  fputc(0x00, fp); //bytes read into y
  fputc(0x8c, fp); //bytes read into y
  fputc(0xe0, fp); //change x read multiple lines
  fputc(0x00, fp); //bytes read into x
  fputc(0x8c, fp); //bytes read into x
  fputc(0x40, fp); //draw a line
  fputc(0xe1, fp); //move y
  fputc(0xff, fp); //negative bytes read into y
  fputc(0x74, fp); //negative bytes read into y
  fputc(0xe0, fp); //move x
  fputc(0xff, fp); //negative bytes read into x
  fputc(0x74, fp); //negative bytes read into x
  fputc(0x40, fp); //draw a line
  fputc(0x1e, fp); //move x
  fputc(0xc3, fp); //untoggle draw
  fputc(0x5e, fp); //move y
  fputc(0xc3, fp); //toggle draw
  fputc(0xf6, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0xd1, fp);
  fputc(0x50, fp);
  fputc(0xd0, fp);
  fputc(0x50, fp);
  fputc(0x40, fp);
  fputc(0xe1, fp);
  fputc(0xff, fp);
  fputc(0xb0, fp);
  fputc(0xe0, fp);
  fputc(0xff, fp);
  fputc(0xb0, fp);
  fputc(0x40, fp);
  fputc(0x1e, fp);
  fputc(0xc3, fp);
  fputc(0x5e, fp);
  fputc(0xc3, fp);
  fputc(0xf6, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0x00, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0xff, fp); //change colour
  fputc(0xd1, fp); 
  fputc(0x14, fp);
  fputc(0x14, fp);
  fputc(0x40, fp);
  fputc(0xe1, fp); //move y
  fputc(0xff, fp); //negative bytes read into y
  fputc(0xec, fp); //negative bytes read into y
  fputc(0xe0, fp); //move x
  fputc(0xff, fp); //negative bytes read into x
  fputc(0xec, fp); //negative bytes read into x
  fputc(0x40, fp);
  return(0);
}
