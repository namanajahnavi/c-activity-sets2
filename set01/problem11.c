#include <stdio.h>

// Define the Complex structure
struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

// Function to input a complex number
Complex input_complex() {
    Complex num;
    printf("Enter real and imaginary parts of the complex number: ");
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

// Function to add two complex numbers
Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

// Function to output complex numbers and their sum
void output(Complex a, Complex b, Complex sum) {
    printf("First complex number: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Second complex number: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex num1, num2, sum;

    // Input two complex numbers
    num1 = input_complex();
    num2 = input_complex();

    // Calculate the sum
    sum = add_complex(num1, num2);

    // Output the result
    output(num1, num2, sum);

    return 0;
}
