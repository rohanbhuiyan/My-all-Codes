#include<stdio.h>
int main(void)
{
    int total=0;
    int counter=1;
    while (counter<=10)
    {
        printf("Enter grade\n");
        int grade=0;
        scanf("%d",&grade);
        total=total+grade;
        counter=counter+1;


    }
    int average=total/10;
    printf("class average is %d",average);
}
