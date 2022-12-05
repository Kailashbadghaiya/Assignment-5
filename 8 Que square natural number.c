#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sq,n ;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sq = i*i ;
        printf("%d ",sq);
    }
    return 0;
}
