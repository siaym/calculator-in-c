#include <stdio.h>
#include <stdbool.h>

static void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static bool get_double(const char *prompt, double *val) {
    while (1) {
        printf("%s", prompt);
        if (scanf("%lf", val) == 1) {
            clear_input_buffer();
            return true;
        }
        int c = getchar();
        if (c == EOF) {
            return false;
        }
        ungetc(c, stdin);
        printf("Error: Invalid numeric input. Please enter a valid number.\n");
        clear_input_buffer();
    }
}

static bool get_operator(char *op) {
    while (1) {
        printf("Enter operator (+, -, *, /): ");
        if (scanf(" %c", op) == 1) {
            clear_input_buffer();
            if (*op == '+' || *op == '-' || *op == '*' || *op == '/') {
                return true;
            }
        }
        if (feof(stdin)) {
            return false;
        }
        printf("Error: Invalid operator. Supported operators: +, -, *, /\n");
    }
}

int main(void) {
    char op;
    double num1, num2;
    char again;

    do {
        if (!get_double("Enter first number: ", &num1)) break;
        if (!get_operator(&op)) break;
        if (!get_double("Enter second number: ", &num2)) break;

        switch (op) {
            case '+':
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case '-':
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case '*':
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case '/':
                if (num2 == 0.0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    printf("Result: %.2lf\n", num1 / num2);
                }
                break;
            default:
                printf("Invalid operator.\n");
                break;
        }

        printf("Do you want to calculate again? (y/n): ");
        if (scanf(" %c", &again) == 1) {
            clear_input_buffer();
        } else {
            break;
        }

    } while (again == 'y' || again == 'Y');

    return 0;
}
