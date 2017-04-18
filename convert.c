/* a program which will convert between metric and imperial units*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//takes an input in kilometres and converts it into miles
double ktom(double a){
  double result = (a*5)/8;
  printf("%lf Miles \n", result);
  return result;
}
//takes an input in miles and converts it into kilometres
double mtok(double a){
  double result = (a*8)/5;
  printf("%lf KM \n", result);
  return result;
}
//takes an input in litres and converts it into pints
double ltop(double a){
  double result = (a*44)/25;
  printf("%lf Pints \n", result);
  return result;
}
//takes an input in pints and converts it into litres
double ptol(double a){
  double result = (a*25)/44;
  printf("%lf L \n", result);
  return result;
}
//takes an input in grams and converts it into ounces
double gtoo(double a){
  double result = (a/28);
  printf("%lf Ounces \n", result);
  return result;
}
//takes an input in ounces and converts it into grams
double otog(double a){
  double result = (a*28);
  printf("%lf Grams \n", result);
  return result;
}
//determines what the user's choice is and calls the function they need
int choice(int c, double a){
  switch(c) {
  case 1: ktom(a); break;
  case 2: mtok(a); break;
  case 3: ltop(a); break;
  case 4: ptol(a); break;
  case 5: gtoo(a); break;
  case 6: otog(a); break;
  }
  return 0;
}

int main(){
  char c[100];
  int input;
  double a;
  while (input < 1 || input >6){
  printf("Press 1 if you want to convert between KM and Miles\n");
  printf("Press 2 if you want to convert between Miles and KM\n");
  printf("Press 3 if you want to convert between L and Pints\n");
  printf("Press 4 if you want to convert between Pints and L\n");
  printf("Press 5 if you want to convert between G and Ounces\n");
  printf("Press 6 if you want to convert between Ounces and G\n");
  scanf("%s", c);
  if (strlen(c) != 1) continue;
  else {
  input =  atoi(c);
  }
}
  printf("How much of the quantity do you want to convert?\n");
  scanf("%lf", &a);
  choice(input, a);
}
