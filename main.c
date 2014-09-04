#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int a;
    int A;
    char Hexadecimal[12]="Hexadecimal";
    char Octal[6]="Octal";
    char chose[12];
    printf("Put a number:\t");
    scanf("%d",&a);
    printf("Please,choose number system Octal or Hexadecimal:\t");
    scanf("%s",chose);
    if( strcmp (Octal,chose) == 0)
    {
        printf("Octal number is : %o",a);
    }
    else if(strcmp (Hexadecimal,chose) ==0)
    {
         printf("Octal number is : %x",a);
    }
    return 0;
}

