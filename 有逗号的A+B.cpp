#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    char s1[10],s2[10],s3[10],s4[10];
    while(cin>>s1){
        int i;
        int k1=0,k2=0;
        cin>>s2;
        int len1=strlen(s1);
        int len2=strlen(s2);
        for(i=0;i<len1;i++){
            if(s1[i]!=','){
                s3[k1++]=s1[i];
            }
            s3[k1]='\0';
        }
        for(i=0;i<len2;i++){
            if(s2[i]!=','){
                s4[k2++]=s2[i];
            }
            s4[k2]='\0';
        }
    }
    cout<<atoi(s3)+atoi(s4);
}
