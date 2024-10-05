#include <stdio.h>

int main() {
    float radius, area, perimeter;
    const float PI = 3.1415;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("The area of the circle is: %.2f\n", area);
    printf("The perimeter (circumference) of the circle is: %.2f\n", perimeter);

    return 0;
}
