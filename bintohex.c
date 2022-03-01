#include <stdio.h>
 
int main()
{
    long int binval, hexval = 0, i = 1, rem;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binval);
    while (binval != 0)
    {
        rem = binval % 10;
        hexval = hexval + remr * i;
        i = i * 2;
        binval = binval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexval);
    return 0;
}
