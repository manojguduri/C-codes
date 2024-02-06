#include<stdio.h>
int main(void){
    int a= 0,b=1,num;
    printf("Enter the limit of the series");
    scanf("%d",&num);
    int temp_num = num-2;
    printf("%d %d ",a,b);
    while(temp_num>0){
        int temp = a+b;
        a = b;
        b = temp;
        temp_num--;
        printf("%d ",temp);
    }
}