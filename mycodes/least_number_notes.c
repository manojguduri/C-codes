#include<stdio.h>
int main(void)
{
    int amount,ones,twoes,fives,tens,fifties,hundreds,total;
    printf("Enter the amount please : ");
    scanf("%d",&amount);
    hundreds = amount/100;
    amount = amount%100;
    fifties = amount/50;
    amount = amount%50;
    tens = amount/10;
    amount = amount%10;
    fives = amount/5;
    amount = amount%5;
    twoes = amount/2;
    amount = amount%2;
    ones = amount/1;
    amount = amount%1;
    total = ones+twoes+fives+tens+fifties+hundreds;
    printf("Minimum number of notes required : %d",total);
}