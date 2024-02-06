#include<stdio.h>
#include<math.h>
void stats(int* a, float* b,double* c){
    int p,q,r,s,t;
    printf("Enter five numbers : ");
    scanf("%d%d%d%d%d",&p,&q,&r,&s,&t);
    *a = p+q+r+s+t;
    *b = *a/5;
    *c = sqrt((pow((p-*b),2.0)+pow((q-*b),2.0)+pow((r-*b),2.0)+pow((s-*b),2.0)+pow((t-*b),2.0))/4);
}

int main(void){
    int sum;
    float avg;
    double stddev;
    stats(&sum,&avg,&stddev);
    printf("Sum is %d\nAverage is %f\nStandard Deviation is %lf\n",sum,avg,stddev);
}