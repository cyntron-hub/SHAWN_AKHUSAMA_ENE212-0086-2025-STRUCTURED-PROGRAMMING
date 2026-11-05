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

        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
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
