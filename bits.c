#include <stdio.h>
#include <string.h>


void toBinary(int n){
  char binary[32] = "0";
  for (int i = 31; i >= 0 && n>=0 ; i--){
    binary[i] = n & 0x1;
    n = n  >> 1;
  }
  for (int i = 0; i < 32; i++){
    printf("%d", binary[i]);
  }
printf("\n");
}

void toNegativeBinary(int n){
  char binary[32] = "0";
  for (int i = 31; i >= 0; i--){
    //printf("%s\n", &binary[i]);
    binary[i] = n & 0x1;
    //printf("%s\n",&binary[i]);
    n = n  >> 1;
    //printf("%d\n", n);
  }
  for (int i = 0; i < 32; i++){
    printf("%d", binary[i]);
  }
  printf("\n");
  }


void toHex(int n){
  char hex[8] = "0";
  for (int i = 7; i >= 0 && n >= 0; i--){
    hex[i] = n & 0xF;
   //printf("%d\n",n );
   n = n >> 4;
  // printf("%d\n",n );
  }
  for (int i = 0; i < 8; i++){
    if (hex[i] == 10){printf("A");}
    else if (hex[i] == 11){printf("B");}
    else if (hex[i] == 12){printf("C");}
    else if (hex[i] == 13){printf("D");}
    else if (hex[i] == 14){printf("E");}
    else if (hex[i] == 15){printf("F");}
    else {printf("%d", hex[i]);}
  }
printf("\n");
}

int pack(int r, int g, int b){
    int n = (r << 16) | (g << 8) | b;
    printf("%08x\n", n);
    return n;
}

void unpack(int n){
  int rgb[3];
  rgb[0] = (n >> 16) & 0xFF;
  rgb[1] = (n >> 8) & 0xFF;
  rgb[2] = n & 0xFF;

  pack(rgb[0], rgb[1], rgb[2]);
}

int pack3d(int x, int y, int z){
    int n = ((x & 0xFFFF)  << 20 ) | ((y & 0xFFFF) << 10) | z & 0xFFFF;
    printf("%08x\n", n);
    return n;
}

void unpack3d(int n){
  int rgb[3];
  rgb[0] = (n >> 20) & 0xFF;
  rgb[1] = (n >> 10) & 0xFF;
  rgb[2] = n & 0xFF;

  pack(rgb[0], rgb[1], rgb[2]);
}

void input(){
  int n;
  scanf("%d", &n);
  if (n < 0) {toNegativeBinary(n);}
  else{
  toBinary(n);
  toHex(n);
  unpack(n);
}
}

int main(){
  setbuf(stdout,NULL);
  input();
  return 0;
}
