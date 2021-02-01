#include <stdio.h>
int main()
{
    int pass;
    printf("Enter the passcode : ");
    scanf("%d", &pass);

    if(pass==1234){
        printf("WOAH!!!");
    }
    else{
        printf("OPPS! Try Again");
    }
    return 0;
}