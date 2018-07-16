/*
 *The first of 5 exercises
 * The idea being to roll a dice
 */

#include <stdio.h> //Include libraries
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) { //Get user input from the commandline
  if (argc!=2){
    printf("Command usage ~$./dice <MAXROLL>\n");
    return 1;
  }
  
  int num = atoi(argv[1]);
  
  if (num<1) {
    printf("The input was invalid\n");
  }
  
  else {
    srand(clock());
    printf("You rolled the number %d\n", ((rand()+num) % num) + 1);
  }
  return 0;
}
