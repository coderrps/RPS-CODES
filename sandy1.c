#include <stdio.h>
#include <math.h>
int main()
{
    int l, b, h, volume;

    printf("\nenter the length = ");
    scanf("%d", &l);
    printf("\nenter the breadth = ");
    scanf("%d", &b);
     printf("\nenter the height = ");
    scanf("%d", &h);
    if(l>15 && l<25 && b>10 && b<20 && h==20){
        printf("the length is = %d", l);
        printf("\nthe breadth is = %d", b);
        printf("\nthe height is = %d", h);
        volume = l*b*h;
        printf("\nvolume of classroom is = %d", volume);

    }
    else {
        printf("value is not in the range");   
    }


  return 0;
}