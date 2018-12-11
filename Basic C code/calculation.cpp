#include<stdio.h>

int main()
{
    int a,b,add,subtract,multiply,divide;
    int choice;
    printf("\nEnter two number : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    float result=0;

    printf("Enter  your choice what type of calculation do you want?\n");
    printf("\nIf u want to add between two numbers press --'1' " );
    printf("\nIf u want to subtract between two numbers press --'2' " );
    printf("\nIf u want to multiply  between two numbers press --'3' " );
    printf("\nIf u want to divide between two numbers press --'4' \n" );

    scanf("%d",&choice);

    if(choice==1)
    {
        result=a+b;
        printf("\n%d + %d = %f",a,b,result);

    }
    else if(choice==2)
    {

        result=a-b;
        printf("\n%d - %d = %f",a,b,result);

    }
    else if(choice==3)
    {
         result=a*b;
        printf("\n%d * %d = %f",a,b,result);
    }
    else if(choice==4)
    {
        if(b==0)
        {
          printf("it is not possible");
        }
        else{
        result=a/b;
        printf("\n%d / %d = %d",a,b,result);
        }

    }
    else
    {
        printf("\nYou have pressed wrong button  try again ");
    }


    return 0;
}
