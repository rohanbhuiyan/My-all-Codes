#include<stdio.h>
int main(void)
{
    printf("Number\tsquare\tcube\n");
    for(int count=0;count<=10;count++)


    {
        printf("%d\t%d\t%d\n",count,count*count,count*count*count);
    }
}

