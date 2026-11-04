
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nAddition: %d", num1 + num2);
    printf("\nSubtraction: %d", num1 - num2);
    printf("\nMultiplication: %d", num1 * num2);

    if (num2 != 0) {
        printf("\nDivision: %.2f", (float)num1 / num2);
        printf("\nModulus: %d", num1 % num2);
    } else {
        printf("\nDivision and modulus are not possible with zero.");
    }

    return 0;
}

