
#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = 4 * pi * radius * radius;

    printf("Surface area of the sphere: %.2f\n", area);

    return 0;
}
