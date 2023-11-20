#include <stdio.h>

int main()
{
    // variable declaration
    int price;
    int marks;

    float temperature;

    // variable assignment
    price = 20;
    printf("\n%d", price);
    price = 30;
    printf("\n%d", price);
    price = 30 + 20;
    printf("\n%d", price);

    marks = 90;
    printf("\n%d", marks);

    price = marks - 20;
    printf("\n%d", price);

    // initialization
    int num = 20;
    printf("\n%d", num);


    // variable naming rules
    /**
     * ===>we can not declare the same variable more than once. 
     * int price;
     * int price;
     * ===>not allowed
     * ===>we need to write
     * int price_of_alu;
     * int price_of_chini;
     * ===>to give space,we use underscore(_).
     * ===>we can use a-z, A-Z, _ and 0-9
     * ===>A variable name can not start with a digit
     * int 1price; not allowed
     * int price1; allowed
     * ===>A variable can not be reserved keywords.
     * ===> lowercase convention: price_of_suger;
     * ===> camelcase convention: priceOfSuger;
     * ===> uppercase convention: FIXED_PRICE; (mostly for constants)
     * */
    return 0;
}