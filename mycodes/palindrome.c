#include <stdio.h>
int main(void){
    int number,temp,reverse;
    printf("Enter the number : ");
    scanf("%d",&number);
    //for later use
    temp = number;
    reverse = 0;
    while(number>0){
        reverse = reverse*10+(number%10);
        number=number/10;
    }
    if(temp == reverse){
        printf("%d is a palindrome",temp);
    }
    else{
        printf("%d is not a palindrome",temp);
    }
}