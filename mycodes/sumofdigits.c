#include<stdio.h>
int digisum(int);
int main(void) {
    int num;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    int sum_of_digits = digisum(num);
    printf("The sum of digits in %d is %d\n", num, sum_of_digits);
    return 0;
}
int digisum(int num) {
    if (num == 0) {
        return 0;
    }
    int x = num % 10;
    num = num / 10;
    int sum = x + digisum(num);
    return sum;
}