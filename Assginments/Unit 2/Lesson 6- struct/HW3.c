#include <stdio.h>

struct complexNum{
    float real;
    float imag;
};


int main(int argc, char const *argv[])
{
    struct complexNum num1, num2, sum;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    printf("Real: ");
    scanf("%f", &num1.real);
    printf("Imaginary: ");
    scanf("%f", &num1.imag);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    printf("Real: ");
    scanf("%f", &num2.real);
    printf("Imaginary: ");
    scanf("%f", &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

