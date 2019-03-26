#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n=0,i=0,j=0,count=0,flag=1;
    int *a=(int *)malloc(sizeof(int));
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=2;i<n;i++)
        {
            flag=1;
            if(i%10==1)
            {
                for(j=2;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    a[count]=i;
                    count++;
                }
            }

        }
        if(count)
            {
                for(j=0;j<count-1;j++)
                    printf("%d ",a[j]);
                printf("%d\n",a[count-1]);
            }
            else
                printf("-1\n");

    }
    return 0;
}
