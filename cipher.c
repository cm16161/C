/* A program which inputs a string and a key and will offset every character
in the string by the key, and then return the new string*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//takes a string and a key and offsets the string by the key and prints it
void encrypt(int key, char c[100]){
  for (int i=0; i<100 && c[i] != '\0'; i++){
    if ((c[i] == ' ') || (c[i] == ':') || (c[i] == ',') || (c[i] == '.') || (c[i] == '!') || (c[i] == '?')) {continue;}
    c[i] = c[i] + key;
  }
  //printf("%s\n", c);
}

//allows the user to input the string and a key
void input(){
  char c[100] = " ";
  int key;
  //int n;
  printf("Please Enter a string to convert (must be less than or equal to 6 characters)\n");
  fgets(c, sizeof(c), stdin);
  //n = strlen(c);
  printf("Enter a key to offset your string\n");
  scanf("%d",&key);
  encrypt(key, c);
  printf("%s\n",c);

}

//checks for the equality of characters for the entire length both strings
bool eq(char a[100], char ex[100]){
  bool pass = true;
  for (int i = 0; i<100 && pass == true && a[i] != '\0'; i++){
    if (a[i] != ex[i]) {
      printf("Char: %c at %d != %c\n", a[i], i, ex[i]);
      pass=false;
    }
  }
  printf("pass: %s\n",pass ? "True" : "False");
  return pass;
}

//takes an offset, an input string and an expected output string, passes the
//offset and the input through encrypt and then runs eq() to check the equality
//of the encrypted input string, and the expected encrypted string
void atest(int k, char c[100], char ex[100]){
  char test[100];
  strcpy(test, c);
  encrypt(k, test);
  eq(test, ex);


}

//when this function is called in main(), it will run all of the automatic tests
void test(){
  atest(1, "hello", "ifmmp");
  atest(2, "this is a test", "vjku ku c vguv");
  atest(8, "Hello, World!", "Pmttw, _wztl!");
  atest(4, "Test that numbers work: 1,2,3,4,5", "Xiwx xlex ryqfivw {svo: 5,6,7,8,9");
  atest(-2, "Test how a negative offset works", "Rcqr fmu _ lce_rgtc mddqcr umpiq");
  atest(-1, "Hello, World!", "Gdkkn, Vnqkc!");

}

//runs the functions
int main() {
  test();
  input();
}
