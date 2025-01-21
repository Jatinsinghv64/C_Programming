#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter Two Numbers to check which one is greater ");
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("%d is greater than %d\n", a, b);

    } else {
        printf("%d is greater than %d",b,a);
    }

}
