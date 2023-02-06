#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1,s=0;i<=n;i++)
    {
        if(i%2)
            s=s+i;
    }
    printf("The sum of Odd number is %d",s);

    return 0;

}
