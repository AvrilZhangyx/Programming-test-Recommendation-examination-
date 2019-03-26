#include<stdio.h>
int main(){
    int n;
    int a,b;
    while(scanf("%d",&n)!=EOF){
        if(n<10){
            if(n==5||n==6){
                printf("Yes!\n");
            }
            else
                printf("No!\n");
        }
        else{
            b=n*n%100;
            if(b==n){
                printf("Yes!\n");
            }
            else
                printf("No!\n");
        }
    }
}
