#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Put a number:  ");
    scanf("%d",&a);
    b=a%2;
    c=a%3;
    if ((b==0)||(c==0))
    {
        printf("It is divisible by 2 OR 3 OR both");
    }
    else
    {
       printf("It is not divisible by 2 OR 3 OR both");
    }

    return 0;
}
