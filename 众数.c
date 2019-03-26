#include<stdio.h>
int main(){
    int a[11]={0};
    int i,temp,ans;
    int tem=0,max=0,j=0;
    for(i=0;i<20;i++){
        scanf("%d",&temp);
        if(temp>tem){
            tem=temp;
        }
        a[temp]++;
    }
    while(j<tem){
        if(a[j]>max){
            max=a[j];
            ans=j;
        }
        j++;
    }
    printf("%d",ans);
    return 0;
}
