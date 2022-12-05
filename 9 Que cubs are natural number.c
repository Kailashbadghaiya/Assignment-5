#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,cubs,n ;

    printf("Enter a number :");
    scanf("%d",&n);

    while(i<=n)
    {
        cubs = i*i*i ;
        printf("%d ",cubs);
        i++ ;
    }
    return 0;
}
