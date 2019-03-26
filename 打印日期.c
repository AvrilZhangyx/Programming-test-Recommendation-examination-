#include<stdio.h>
int main(){
    int year,day,i;
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&year,&day);
    if((year%4==0&&year%100!=0)||year%400==0){
        mon[1]=29;
    }
    for(i=0;i<day;i++){
        if(day<mon[i])
            break;
        day-=mon[i];
    }
    printf("%04d-%02d-%02d\n",year,i+1,day);
}
