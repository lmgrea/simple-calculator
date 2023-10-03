#include <stdio.h>
#include <math.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

int main () {
    double a, b, result;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);
        result = add(a, b);
        printf("Result: %.2lf\n", result);

        printf("Subtract: %.2lf\n", subtract(a,b));

        printf("Multiply: %.2lf\n", multiply(a,b));
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}