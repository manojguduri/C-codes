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
    int fact = 1;
    int i;
    for (i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}