#include <stdio.h>
float power(float, int);
int main() {
    int num2;
    float num1, exponent;
    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter another number : ");
    scanf("%d", &num2);
    exponent = power(num1, num2);
    printf("%d", exponent);
    return 0;
}
float power(float x, int y) {
    int i = 1;
    float result = 1;
    for (i; i <= y; i++) {
        result = result * x;
    }
    return result;
}