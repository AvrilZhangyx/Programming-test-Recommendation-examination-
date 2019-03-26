#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n/10)+n%10;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d %d",sum(n),sum(n*n));
    }
}
