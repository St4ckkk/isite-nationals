#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender) {
    //Write your code here.
    int sum = 0;
    for (int i = 0; i < number_of_students; ++i) {
        if (gender == 'b') {
            if (i % 2 == 0) // For boys, consider every alternate student starting from 0 to even numbers
                sum += marks[i];
        } else if (gender == 'g') {
            if (i % 2 != 0) // For girls, consider every alternate student starting from 1 to odd numbers
                sum += marks[i];
        } else {
            sum += marks[i]; // For others, sum up all students
        }
    }
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}