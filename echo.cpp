#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int len=a.length();
    int i=0;
    while(i<len-1){
        cout<<a<<endl;
        i++;
        a=a.substr(i,len);
    }
    cout<<a[len];
    return 0;
}
