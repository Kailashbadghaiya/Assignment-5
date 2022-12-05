#include<stdio.h>
#include<conio.h>
int main()
{
    int n ;

    printf("Enter a number :");
    scanf("%d",&n);

    do
    {
        printf("%d ",n*2);
        n-- ;
    }
    while(n>=1);
    return 0;
}
