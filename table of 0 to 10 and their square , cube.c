#include<stdio.h>
int main(void)
{
    int count=0;
    printf("Number\tsquare\tcube\n");
    while (count<=10)

    {
        printf("%d\t%d\t%d\n",count,count*count,count*count*count);

        count +=1;
    }
}
