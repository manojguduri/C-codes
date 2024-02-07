#include <stdio.h>
#include <math.h>
int main(void) {
  int n,r,count = 0,p,q,rem,sum;
  scanf("%d",&n);
  int temp =n;
  int sq = n*n;
  do{
    r = n%10;
    n = n/10;
    count += 1;
  }while(n != 0);
  p =pow(10,count);
  q = sq/p;
  rem = sq%p;
  sum = q+rem;
  if(sum == temp)
    printf("Kaprekar Number");
  else
    printf("Not a Kaprekar Number");
  return 0;
}
