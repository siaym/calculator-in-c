#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    char again;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);  

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(op) {
            case '+': printf("Result: %.2lf\n", num1 + num2); break;
            case '-': printf("Result: %.2lf\n", num1 - num2); break;
            case '*': printf("Result: %.2lf\n", num1 * num2); break;
            case '/':
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Cannot divide by zero.\n");
                break;
            default: printf("Invalid operator.\n");
        }

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    return 0;
}
