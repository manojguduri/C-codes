#include<stdio.h>
void factorize(int , int);
int main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Prime factors are : ");
    factorize(num,2);
}
void factorize(int n , int i){
    if(i<=n){
        if(n%i == 0){
            printf("%d ",i);
            n = n/i;
        }
        else{
            i++;
        }
        factorize(n,i);
    }
}