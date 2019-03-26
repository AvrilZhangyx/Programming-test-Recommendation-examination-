#include<stdio.h>
int main(){
    int mar[10][10];
    int i,j,k,n,max;
    int temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mar[i][j]);
        }
    }
    for(j=0;j<n;j++){
        max=j;
        for(i=j;i<n;i++){
        if(mar[i][j]>mar[max][j]){
            max=i;
        }
        }
        for(k=0;k<n;k++){
            temp=mar[j][k];
            mar[j][k]=mar[max][k];
            mar[max][k]=temp;
        }
    }
        for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            printf("%d ",mar[i][j]);
        }
        printf("%d\n",mar[i][j]);
    }
}
