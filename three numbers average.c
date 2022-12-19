#include<stdio.h>
int main (void)
{
    int a,b,c,sum;
    printf("enter three number");
    scanf("%d %d %d", &a,&b,&c);
    sum=a+b+c;
    float average=0;
    average =sum/3;
    printf("the sum is %d\n\n\n",sum);
    printf("the average is %2f\n\n",average);
}

