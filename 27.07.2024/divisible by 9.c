#include<stdio.h>
void main()
{
    int n,m,j,sum;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%9==0)
        {
            sum+=i;
            j+=1;
            printf("%d",i);
        }
    }
    printf("\nNo.of integers: %d\n",j);
    printf("Sum: %d\n",sum);
}
