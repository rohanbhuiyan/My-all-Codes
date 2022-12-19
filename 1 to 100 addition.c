#include<stdio.h>
int main (void)
{
    int sum = 0 ;
    for(int number = 2;number<=100;number +=2)
    {
        sum +=number;
        printf("%d\n", number);
        printf("sum is %d\n",sum);
    }
}
