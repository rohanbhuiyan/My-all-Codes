#include <stdio.h>

int main()
{
    int sum=0;


    for(int number=2; number<=100; number+=2)
    {

        sum += number;
    }

    printf("Sum of all even number  %d", sum);

    return 0;
}
