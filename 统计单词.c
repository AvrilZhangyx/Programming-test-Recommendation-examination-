#include<stdio.h>
int main(){
    char s[100];
    int i,num;
    while(scanf("%s",&s)!=EOF){
            i=0;
    num=0;
        for(i=0;s[i]!='\0'&&s[i]!='.';i++)
            num++;
        if(s[i]=='.')
        printf("%d\n",num);
        else
            printf("%d ",num);
    }
    return 0;
}
