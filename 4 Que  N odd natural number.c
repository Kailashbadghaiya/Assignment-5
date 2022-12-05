#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n ;

    printf("Enter a number :");
    scanf("%d",&n);

    do
    {
        printf("%d ",2*i-1);
        i++ ;
    }
    while(i<=n);
    return 0;
}
