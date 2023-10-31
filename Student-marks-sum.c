#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    int i;
    if (gender == 'b') {
        for (i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else {
        for (i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    return sum;
}

int main() {
    int number_of_students, i;
    char gender;
    int *marks;

    scanf("%d", &number_of_students);

    marks = (int*) malloc(number_of_students * sizeof(int));

    for (i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);

    printf("%d\n", marks_summation(marks, number_of_students, gender));

    free(marks);

    return 0;
}
