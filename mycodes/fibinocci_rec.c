#include <stdio.h>
void fact(int, int, int);
int main(void) {
    int lim = 25;
    int a = 0, b = 1;
    printf("%d %d ", a, b); 
    if (lim > 2) {
        fact(a, b, lim - 2);
    }
    return 0;
}
void fact(int a, int b, int x) {
    if (x > 0) {
        int num = a + b;
        printf("%d ", num);
        fact(b, num, x - 1);
    }
}
