#include <stdio.h>


#define area_of_circle(r) (3.14*r*r)

int main() {
    // Your code here
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Area of the circle: %.2f\n", area_of_circle(r));
    return 0;
}