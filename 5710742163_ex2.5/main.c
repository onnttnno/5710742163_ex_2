#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Put a integer1:  ");
    scanf("%d",&a);
    printf("Put a integer2:  ");
    scanf("%d",&b);
    c=b-a;
    d=a-b;
    if(c>=0)
    {
         printf(" |integer1-integer2|=   %d",c);
    }
    else if (d>0)
    {
        printf(" |integer1 - integer2|= %d",d);
    }
    return 0;
}
