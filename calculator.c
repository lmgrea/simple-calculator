#include <stdio.h>
#include <math.h>

//Function Prototypes for operations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

//Main function where the user inputs the type of operation and the values
int main () {
double a, b, result;
    int choice, n;

    printf("Select operation:\n");
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = add(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = subtract(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = multiply(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = divide(a, b);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

//Function definitions for prototypes
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}