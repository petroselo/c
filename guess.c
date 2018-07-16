/* A programme that let's the user guess a number randomly made
 * tells user higher lower or correct adn let's reguess
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //Declare variables to use  
  int num, guess, count;
  
  //Generate a random number
  srand(time(0));
  num = rand()%10000;
  count = 0;

  while(1) {
    //get user input
    printf("Guess>> ");
    scanf("%d", &guess);
    
    //increase amount of guesses
    count++;
  
    if (guess == num){
      printf("Correct, Answer: %d, in %d guesses\n", num, count);
      return 0;
    }
    else if (guess > num)
      puts("Too Big");
    else if (guess < num)
      puts("Too Small");

    if (count >= 1000)
      return 1;
  }
}
