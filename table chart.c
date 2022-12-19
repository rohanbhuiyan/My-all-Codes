#include<stdio.h>
int main (void)
{
    int a=3;
    printf("a\ta+2\ta+4\ta+6\n");
    while(a<=15)
    {
        printf("%d\t %d\t %d\t %d\n",a,a+2,a+4,a+6);
        a+=3;
    }
}
