#include <stdio.h>

// Define the struct for distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add the feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If inches exceed 12, convert to feet
    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches %= 12;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;

    // Input the first distance
    printf("Enter the first distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    // Input the second distance
    printf("Enter the second distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);

    // Add the distances
    sum = addDistances(distance1, distance2);

    // Display the result
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}