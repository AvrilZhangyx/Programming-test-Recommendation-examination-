#include <cstdio>
#include <cstring>
#define MAXSIZE 110
using namespace std;

int main(){
    int len,p,q;
    char str1[MAXSIZE],str2[MAXSIZE],str[MAXSIZE*2];
    while (scanf("%s",str1)!=EOF){
        scanf("%s",str2);
        //initiate
        len=strlen(str1);
        p=0;
        q=len-1;
        //process
        for (int i=0;i<len*2;i+=2){
            str[i]=str1[p];
            p++;
            str[i+1]=str2[q];
            q--;
        }
        str[len*2]='\0';
        //output
        printf("%s\n",str);
    }
    return true;
}
