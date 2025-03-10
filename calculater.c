#include <stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int divide(int num1, int num2)
{
    return num1 / num2;
}
int multiply(int num1, int num2)
{
    return num1 * num2;
}
int main()
{
    int num1, num2, result, input;
    char op;
    do
    {
        result = 0;
        printf("enter the operater:(+,-,*,/):");
        scanf(" %c", &op);
        printf("enter a number: ", num1);
        scanf("%d", &num1);
        printf("enter a number: ", num2);
        scanf("%d", &num2);

        switch (op)
        {
        case '+':
            result = add(num1, num2);
            printf("Result: %d %c %d = %d\n", num1, op, num2, result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("Result: %d %c %d = %d\n", num1, op, num2, result);
            break;
        case '/':
            result = divide(num1, num2);
            printf("Result: %d %c %d = %d\n", num1, op, num2, result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %d %c %d = %d\n", num1, op, num2, result);
        default: printf("Invalid input");
        }
        

        printf("Do you want to continue\n1 - Yes\n2 - No\n: ");
        scanf("%d", &input);
    } while (input == 1);
    printf("Thank you..........");
    return 0;
}