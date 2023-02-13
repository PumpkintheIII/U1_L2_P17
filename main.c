/*
  UB C Programming Unit 1 Lesson 2 Program 17
  ASCII Code from Character
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  int character; //initialize variable as integer

  printf("This program allows the user to input a character and the program will output it's corresonding ASCII Code. You will get a prompt:\n\t- Character: Please enter 1 character here.\n");
  //instructions
  
  printf("Character: "); //ask for user input
  character = getchar(); //accept input
  
  printf("Number: %d", character); //print output
  
  return 0;
}