#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;

    printf("Enter a number :\n");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        i++ ;
    }
    while(i<=n);
    return 0;
}
