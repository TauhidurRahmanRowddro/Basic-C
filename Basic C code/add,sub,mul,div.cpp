#include<stdio.h>

int main()
{
    int a,b,add,subtract,multiply,divide;
    printf("Enter two number : \n");
    scanf("%d",&a);
    scanf("%d",&b);

    add=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;

    printf("\n%d + %d = %d",a,b,add);
    printf("\n%d - %d = %d",a,b,subtract);
    printf("\n%d X %d = %d",a,b,multiply);
    printf("\n%d / %d = %d",a,b,divide);

    return 0;
}
