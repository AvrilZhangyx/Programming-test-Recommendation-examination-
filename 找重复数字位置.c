#include<stdio.h>
int main(){
    int n,i;
    int y1=0,y2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
            y1=y1+Fun(i);
        }
        else
            y2=y2+Fun(i);
    }
    printf("%d %d",y1,y2);
}
int Fun(int m){
    int i;
    int ans=1;
    for(i=1;i<=m;i++){
        ans=ans*i;
        }
    return ans;
}
