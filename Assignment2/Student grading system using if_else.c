#include <stdio.h>

int main() {
    int n, i, regNo, marks;
    char name[50], grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter details for student %d\n", i);

        printf("Registration Number: ");
        scanf("%d", &regNo);

        printf("Name: ");
        scanf(" %49[^\n]", name);

        printf("Marks: ");
        scanf("%d", &marks);

        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        }
        else if (marks >= 60 && marks < 70) {
            grade = 'B';
        }
        else if (marks >= 50 && marks < 60) {
            grade = 'C';
        }
        else if (marks >= 40 && marks < 50) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("\n----- STUDENT INFORMATION -----\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        if (marks >= 40 && marks <= 100) {
            printf("Status: Passed\n");
        }
        else {
            printf("Status: Failed\n");
        }

        printf("-------------------------------\n");
    }

    return 0;
}
