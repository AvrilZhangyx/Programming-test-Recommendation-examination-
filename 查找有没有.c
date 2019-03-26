#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,n,m,number,find;
    int array[101];
    //freopen("C:\\Users\\SJF\\Desktop\\acm.txt","r",stdin);
    while(scanf("%d",&n) != EOF)
    {
        //输入数组
        for(i = 0;i < n;i++){
            scanf("%d",&array[i]);
        }
        //输入查找个数m
        scanf("%d",&m);
        for(i = 0;i < m;i++){
            find = 0;
            //输入查找数字
            scanf("%d",&number);
            for(j = 0;j < n;j++){
                if(array[j] == number){
                    find = 1;
                    break;
                }
            }
            //找到
            if(find == 1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
