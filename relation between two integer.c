#include<stdio.h>
int main (void)
{
    int a,b;
    printf("enter two integer number\n");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("%d and %d are equal\n",a,b);
    }

    else if (a>b)
    {
        printf("%d is greater than %d\n",a,b);

    }
    else
    {
        printf("%d is less than %d\n",a,b);
    }
    return 0;

}
