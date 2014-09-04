#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int A;
    int B;
    printf("Put a number:\t");
    scanf("%d",&a);
    printf("Please select output base [8 or 16]:\t");
    scanf("%d",&A);
    B=A%16;
    if( B>0)
    {
        printf("Result : %o",a);
    }
    else if(B==0)
    {
         printf("Result : %x",a);
    }
    return 0;
}
