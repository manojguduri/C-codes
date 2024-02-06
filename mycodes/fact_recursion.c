#include <stdio.h>

int factorial(int x);

int main(void) {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d\n", num, fact);
    return 0;
}

int factorial(int x) {
    int fact;
    if (x == 1) {
        return 1;
    } else {
        fact = x * factorial(x - 1);
    }
    return fact;
}
