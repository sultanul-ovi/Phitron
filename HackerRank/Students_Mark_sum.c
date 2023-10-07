#include <stdio.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;

    // Check if the gender is 'b' (boys)
    if(gender == 'b') {
        for(int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    // Check if the gender is 'g' (girls)
    else {
        for(int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);

    int marks[number_of_students];
    for(int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    char gender;
    scanf(" %c", &gender);  // Adding space before %c to consume the leftover newline

    int result = marks_summation(marks, number_of_students, gender);
    printf("%d", result);

    return 0;
}
