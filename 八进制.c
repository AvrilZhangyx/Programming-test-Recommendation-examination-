#include<stdio.h>
int main(){
    int n,i,ans;
    int m=1;
    scanf("%d",&n);
    printf("%o",n);
    getch();
    return 0;
}
/*
#include <stdio.h>
void pp(int n)
{
int j;
j=n%8;
if(n>=8)
pp(n/8);
printf("%d",j);
}
void main()
{
int i,j;
printf("请输入一个10进制:");
scanf("%d",&i);
pp(i);
}*/

/*int *Init()
{
int *top,*base;
base=(int *)malloc(sizeof(int) * 50);
if(!base) {printf("Error!");exit();}
top=base;
return top;
}

int *push(int *top,int n)
{
*top=n;
top++;
return top;
}

int pop(int *top)
{
int e;
top--;
e=*top;
return e;
}

void convs()
{
int *top, *base;
int e,N;
int i;
top=Init();
base=top;
printf("Input the number:\n");
scanf("%d",&N);
while(N!=0)
{
top=push(top,N%8);
N=N/8;
}
printf("After change,the number is:\n");
while(top!=base)
{
e=pop(top);
top--;
printf("%d",e);
}
printf("\n");
}
main()
{
convs();
getch();
}*/
