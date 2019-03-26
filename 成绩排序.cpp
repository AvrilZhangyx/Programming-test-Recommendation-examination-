#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<math.h>
#include<string.h>
#include<queue>
#include<vector>
#include<set>
#define LL long long
#define exp 1e-9
#define MAXN 1000010

using namespace std;

struct node{
    char name[101];
    int age;
    int grade;
}stu[1003];

bool cmp(node a,node b)
{
    if(a.grade!=b.grade)
        return a.grade<b.grade;
    else
    {
        if(strcmp(a.name,b.name)!=0)
            return strcmp(a.name,b.name)<0;
        else
            return a.age<b.age;
    }
}

int main()
{
//  freopen("D:\\in.txt","r",stdin);
    int N,i;
    while(scanf("%d",&N)!=EOF)
    {
        for(i=0;i<N;i++)
        {
            scanf("%s%d%d",&stu[i].name,&stu[i].age,&stu[i].grade);
        }
        sort(stu,stu+N,cmp);
        for(i=0;i<N;i++)
        {
            printf("%s %d %d\n",stu[i].name,stu[i].age,stu[i].grade);
        }
    }
    return 0;
}
