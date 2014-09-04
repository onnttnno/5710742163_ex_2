#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Put a number: ");
    scanf("%d",&a);
    b=a-40;
    c=a-100;
    if ((b>0)&&(c<0))
    {
        printf("It is from between 40 to 100");
    }
    else
    {
        printf("It is not from between 40 to 100");

    }
    return 0;
}
