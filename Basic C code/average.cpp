#include<stdio.h>

int main()
{
    int a,b,i,avarege;
    int sum=0;
    printf("How many number you want to avarage : ");
    scanf("%d",&a);

    printf("enter any %d numbers\n",a);
    for(i=1;i<=a;i++)
    {

        scanf("%d",&b);
        sum=sum+b;
    }

    printf("\nSummetion is : %d",sum);
    avarege=sum/a;
    printf("\nAvarege is : %d\n\n",avarege);


    return 0;

}
