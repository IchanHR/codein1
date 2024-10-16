#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    // Input the lengths of the three sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
