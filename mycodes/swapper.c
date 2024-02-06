#include<stdio.h>
void swapr (int* ,int*)
int main(void){
    int a = 10, b=20;
    printf("a = %d and b = %d",a,b);
    swapr(&a,&b);
    printf("a = %d and b = %d",a,b);
}
void swapr(int* x, int* y){
    int temp = *x;
    printf("%d",temp);
    printf("%u",temp);
    *x = *y;
    printf("%u",*x);
    *y = temp;
}