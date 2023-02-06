#include<stdio.h>
int main()
{
    int i,n,flage=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            flage=1;
    }
    if(flage == 0)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
    return 0;
}
