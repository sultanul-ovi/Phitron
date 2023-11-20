/*
আমরা একটা প্রোগ্রাম লিখেছিলাম যেটা a op b আকারের মান বের করতে পারে। ওটাকে এমনভাবে আপডেট কর যেন ওটা % অপারেটর এর জন্যও কাজ করে আর 0 দিয়ে ভাগ বা % করতে গেলে “Cannot divide by 0” print দেয়।
Example:
Input:5 * 15
Output:75
Input:3%2
Output:1
Input:5/0
Output:Cannot divide by 0.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int num1, num2, result;
    char op;

    scanf("%d %c %d", &num1, &op, &num2);
    /*
        if (op == '+')
            result = num1 + num2;
        else if (op == '-')
            result = num1 - num2;
        else if (op == '*')
            result = num1 * num2;
        else if (op == '/')
            result = num1 / num2;
        else if (op == '%')
            result = num1 % num2;
        else
        {
            printf("Invalid\n");
            exit(0);
        }
        printf("\n\t%d %c %d = %d\n", num1, op, num2, result);
    */
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
            printf("Cannot divide by 0");
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        printf("Invalid\n");
        exit(0);
    }
    printf("\n\t%d %c %d = %d\n", num1, op, num2, result);
}
