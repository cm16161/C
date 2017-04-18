#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/* This is a program that will tell the user which day Christmas will occur on
for a given input year */

//calculates how many leap years occur between the base year and the input year
int leapYear(int difference){
  int NoLeapYears = (difference / 4);
  return NoLeapYears;
}

//determines which day of the week Christmas actually occurs on
int dayOfWeek(int yearSeparation, int year){
  int day;
  if (yearSeparation >= 0){
    day = (yearSeparation % 7);
  }
  else if (year >= 1900 && year <=2000){
    day = abs(yearSeparation % 7);
    day = 6 - day;
  }
  else {
    day = abs(yearSeparation % 7);
    day = 7 - day;
  }
  if (year >= 2100) day = day -1;
  if (day < 0) day = day + 7;

  return day;
}

/*performs all the necessary calculations and operations to find out the
difference between the base year and the input year, this data is then
sent to dayOfWeek*/
int findDifference(int year){
  const int base = 2016;
  int difference;
  int offset;
  int yearSeparation;
  difference = (year - base);
  offset = leapYear(abs(difference));
  if (difference < 0){
  yearSeparation = difference - offset;
  dayOfWeek(yearSeparation, year);
  }
  else{
  yearSeparation = difference + offset;
  dayOfWeek(yearSeparation, year);
}
  return yearSeparation;
  }


//allows the user to input the year as well as sorts out which day to output
void input(){
  int year;
  bool inRange = false;
  while (!inRange){
  printf("Please enter a year between 1800 and 2199\n");
  scanf("%d",&year);
  if (year >= 1800 && year < 2200) inRange = true;
  }
  findDifference(year);
  int day = dayOfWeek(findDifference(year), year);
  switch (day) {
    case 0: printf("Christmas is on a Sunday\n"); break;
    case 1: printf("Christmas is on a Monday\n"); break;
    case 2: printf("Christmas is on a Tuesday\n"); break;
    case 3: printf("Christmas is on a Wednesday\n"); break;
    case 4: printf("Christmas is on a Thursday\n"); break;
    case 5: printf("Christmas is on a Friday\n"); break;
    case 6: printf("Christmas is on a Saturday\n"); break;
  }
}

/*a function for testing, determines whether the results of the code is
equal to what the actual answer should be */
bool eq(int actualOffSet, int expectedOffset){
  bool pass = true;
  if (actualOffSet != expectedOffset) pass = false;
  printf("pass: %s\n",pass ? "True" : "False");
  return pass;
}

//a base template for writing out tests
void atest(int inputYear, int expectedOffset){
  eq(dayOfWeek(findDifference(inputYear), inputYear), expectedOffset);
}

//a functin which calls all the tests
void test(){
  atest(2016, 0);
  atest(2017, 1);
  atest(2022, 0);
  atest(2028, 1);
  atest(1895, 3);
  atest(1865, 1);
  atest(1895, 3);
  atest(1849, 2);
  atest(2195, 5);
  atest(2100, 6);
  atest(2170, 2);
  atest(1966, 0);
  atest(1945, 2);
  atest(1939, 1);
  atest(1927, 0);
  atest(1919, 4);
  atest(1918, 3);
}

int main(){
  test();
  input();
  return 0;
}
