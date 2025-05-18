#include <stdio.h>

int main() {
    int operation;
    float result, num;
    char choice;

    printf("Enter the first number: ");
    scanf("%f", &result);

    do {
        printf("\nChoose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &operation);

        printf("Enter the next number: ");
        scanf("%f", &num);

        switch (operation) {
            case 1 :
                result += num;
                printf("Result: %.2f\n", result);
                break;
            case 2 :
                result -= num;
                printf("Result: %.2f\n", result);
                break;
            case 3 :
                result *= num;
                printf("Result: %.2f\n", result);
                break;
            case 4 :
                if (num == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result /= num;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5 :
                if ((int)num == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                } else {
                    result = (int)result % (int)num;
                    printf("Result: %.0f\n", result);
                }
                break;
            default:
                printf("Invalid operator. Use +, -, *, /, or %%.\n");
        }

        printf("\nDo you want to perform another operation on the result? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Final result: %.2f\n", result);
   
    return 0;
}