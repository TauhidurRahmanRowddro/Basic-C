#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two number :\n");
    scanf("\n%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is bigger\n",a);
        printf("%d is smaller\n",b);

    }
    else if(b>a)
    {
        printf("%d is bigger\n",b);
        printf("%d is smaller\n",a);

    }
    else
    {
        printf("\nThe number are same\n");
    }
    return 0;
}
