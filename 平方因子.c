#include<stdio.h>
int main(){
    int n,i;
    int flag=0;
    while(scanf("%d",&n)!=EOF){
        for(i=2;i*i<=n;i++){
            if(n%(i*i)==0){
                flag=1;
            }
        }
    }
    if(flag){
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}
