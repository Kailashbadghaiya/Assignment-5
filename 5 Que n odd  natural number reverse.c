#include<stdio.h>
#include<conio.h>
int main()
{
    int x ;

    printf("Enter a number :");
    scanf("%d",&x);

    do
    {
        printf("%d ",2*x-1);
        x-- ;
    }
    while(x>=1);
    return 0;
}
