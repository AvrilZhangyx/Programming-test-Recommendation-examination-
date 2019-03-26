#include<stdio.h>
int main()
{int a,b,c,d;
scanf("%d.%d.%d.%d",&a,&b,&c,&d);
if(a>=0&&a<256&&b>=0&&b<256&&c>=0&&c<256&&d>=0&&d<256)
printf("Yes!");
else
printf("No!");
return 0;
}
