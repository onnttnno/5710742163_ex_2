#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Please enter coordinate(x,y): ");
    scanf("%f",&x);
    scanf("%f",&y);
    if((x>0)&&(y>0))
    {
        printf("Result:Q1");
    }
    else if ((x<0)&&(y>0))
    {
        printf("Result:Q2");
    }
    else if ((x<0)&&(y<0))
    {
        printf("Result:Q3");
    }
    else if ((x>0)&&(y<0))
    {
        printf("Result:Q4");
    }
    else if ((x==0)&&(y==0))
    {
        printf("It poin is not quadant ");
    }
    return 0;
}
