#include <stdio.h>
int main()
{
    int x, y, add, sub, div, pro, mod;
    printf("Enter the numbers x and y : ");
    scanf("%d %d", &x, &y);

    add = x+y;
    sub = x-y;
    div = x/y;
    pro = x*y;
    mod = x%y;

    printf("\nThe addition is = %d", add);
    printf("\nThe substraction is = %d", sub);
    printf("\nThe division is = %d", div);
    printf("\nThe product is = %d", pro);
    printf("\nThe modulus is = %d", mod);

    return 0;
    }