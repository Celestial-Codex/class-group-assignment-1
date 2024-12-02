/* QUESTION:
 *
 * Write a program that accepts the student admission number, student surname
 * and three subjects marks and displays the same along with the student average
 * mark. The program should also dispay the student average grade depending on
 * the average marks the student obtains. The grading system is shown below
 *
 * --------------------------
 * | Average Mark  | Grade
 * --------------------------
 * | 0-39          | Fail
 * | 40-50         | D
 * | 50-59         | C
 * | 60-69         | B
 * | 70-100        | A
 * --------------------------
 *
 * The program should also prompt the user if to continue. If the user enters
 * "Y" for yes then the program computes for another student and "N", for no
 * then the program exits.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char admission_number[4];
  char surname[20];
  int maths, english, science;
  double average;
  char grade[5];
  char continue_evaluating_students;
  do {
    printf("\n------------------------------------------------\n\n");
    printf("Enter Student Admission Number(4 characters): ");
    scanf("%s", admission_number);

    printf("Enter Student Surname: ");
    scanf("%s", surname);

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter English Marks: ");
    scanf("%d", &english);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    /* determine average mark for current student */
    average = (maths + english + science) / 3.0;

    /* determine grade for current student */
    if (average >= 70) {
      strcpy(grade, "A");
    } else if (average >= 60) {
      strcpy(grade, "B");
    } else if (average >= 50) {
      strcpy(grade, "C");
    } else if (average >= 40) {
      strcpy(grade, "D");
    } else {
      strcpy(grade, "Fail");
    }
    printf("\n-----------------------------------------------\n\n");
    printf("Student Admission:%s\n", admission_number);
    printf("Surname: %s\n", surname);
    printf("Maths: %d\n", maths);
    printf("English: %d\n", english);
    printf("Science: %d\n", science);
    printf("\n------------------------------------------------\n\n");
    printf("Average: %.2lf\n", average);
    printf("Grade: %s\n",grade);
    printf("\n----------------------------------------------\n\n");

    printf("Would you like to evaluate more students (Y/N): ");
    scanf("%s", &continue_evaluating_students);
  } while (continue_evaluating_students == 'Y');
  printf("Have a good day\n");
  return 0;
}