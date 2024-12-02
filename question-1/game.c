/* QUESTION:
 *
 * A program is required for a computer game. The user keys in the number of
 * rounds he wishes to play. For each round the user enters his lucky number.
 * The program takes the number and divides it with a secret number. If the
 * remainder of the division is zero, it is considered a draw for the round and
 * the total score is incriminated by 1. Otherwise if it is any other even
 * number, it is any other even number, it is considered a win for the round and
 * the total score is incremented by 3. However, if it is an odd number, it is
 * considered a loss for the round and the total score is decremented by 3. This
 * is done until he completes his rounds. He wins if the total at score at the
 * end is a positive number. Write a C program to accomplish this.
 *
 */

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(void) {
  srand(time(NULL));
  int no_of_rounds, lucky_number, remainder;
  int total_score = 0;
  int secret_number = rand() % 1000;
  printf("Welcome to even - odds your new addiction 😄\n");
  printf("How many rounds are you up for: ");
  scanf("%d", &no_of_rounds);

  for (int i = 0; i < no_of_rounds; i++) {
    printf("\n-----------------------------------\n\n");
    printf("Round: %d\n", i + 1);
    printf("Enter your lucky number: ");
    scanf("%d", &lucky_number);
    remainder = lucky_number % secret_number;
    if (remainder == 0) {
      total_score += 1;
    } else if (remainder % 2 == 0) {
      total_score += 3;
    } else {
      total_score -= 3;
    }
    printf("Current Score: %d\n", total_score);
  }
  printf("\n--------------------------------------------------\n");
  if (total_score > 0) {

    printf("You win 🥳\n");
  } else {
    printf("You loose 😢\n");
  }
  printf("The secret number was: %d\n", secret_number);
  printf("--------------------------------------------------\n");

  return 0;
}
