#include<stdio.h>
int main(){
    int n,i;
    int a[99];
    scanf("%d",&n);
    a[1]=1;
    a[2]=2;
    for(i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("%ld",a[n]);
}
