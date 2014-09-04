#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A;
    printf("Put a score[0-100]: ");
    scanf("%f",&A);
    if (A>=80)
    {
        printf("You grade is : A");
    }
    else if((A>=70)&&(A<=79))
            {
               printf("You grade is : B");
            }
            else if ((A>=60)&&(A<=69))
                {
                    printf("You grade is : C");
                }
                else if ((A>=50)&&(A<=59))
                {
                     printf("You grade is : D");
                }
                else if (A<50)
                {
                    printf("You grade is : F");
                }
    return 0;
}
